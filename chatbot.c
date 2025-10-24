#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Chatbot: Hello! I am a simple chatbot. Type 'bye' to exit.\n");

    while (1) {
        printf("You: ");
        fgets(input, sizeof(input), stdin);


        input[strcspn(input, "\n")] = 0;

        if (strcmp(input, "hi") == 0 || strcmp(input, "hello") == 0) {
            printf("Chatbot: Hello there! How are you?\n");
        }
        else if (strcmp(input, "i am fine") == 0) {
            printf("Chatbot: That's good to hear!\n");
        }
        else if (strcmp(input, "fine") == 0) {
            printf("Chatbot: That's good to hear!\n");
        }
        else if (strcmp(input, "how are you") == 0) {
            printf("Chatbot: I'm just a program, but I'm doing great!\n");
        }
        else if (strcmp(input, "how was your day") == 0) {
            printf("Chatbot: Good , Thanks for asking!\n");
        }
        else if (strcmp(input, "tell me a joke") == 0) {
            printf("Chatbot: Why did the computer go to the doctor? \n \t Because it caught a virus!\n");
        }
        else if (strcmp(input, "one more") == 0) {
            printf("Chatbot: Why was the math book sad? \n \t Because it had too many problems!\n");
        }
        else if (strcmp(input, "who are you") == 0) {
            printf("Chatbot: I am very intelligent but a dumb machine T-T \n");
        }
        else if (strcmp(input, "tell me a riddle") == 0) {
            printf("Chatbot: What has to be broken before you can use it? ---> An egg \n");
        }
        else if (strcmp(input, "bye") == 0) {
            printf("Chatbot: Goodbye! Have a nice day.\n");
            break;
         }
      }
}