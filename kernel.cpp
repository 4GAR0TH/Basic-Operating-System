// kernel.cpp
extern "C" void kernel_main() {
    // Video memory starts at 0xb8000
    char* video_memory = (char*) 0xb8000;
    const char* message = "Hello, World!";
    int i = 0;

    // Write each character of the message to video memory
    while (message[i] != '\0') {
        video_memory[i * 2] = message[i];      // Character
        video_memory[i * 2 + 1] = 0x07;        // Attribute byte: light gray on black
        i++;
    }

    // Infinite loop to prevent exiting
    while (1) {}
}

