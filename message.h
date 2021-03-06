/**
 * Corentin Badot-Bertrand cbadot-14
 * Corentin Dandoy cdandoy14
 *
 * Serveur STREAMS
 * Fichier header contenant les fonctions de message.c et de la structure pour les messages.
 *
 * https://github.com/Saluki/Streams-Server
 */
#ifndef STREAMS_MESSAGE_H
#define STREAMS_MESSAGE_H

#define MESSAGE_LENGTH 25

enum message_type_t { ERROR_MESSAGE = -1, CANCEL_GAME, REGISTRATE, VALID_REGISTRATION, NEW_PICK, CHOOSE_PICK, END_GAME };

struct message_t {
    enum message_type_t type;
    void* payload;
};

char* encode(enum message_type_t type, void *payload);
struct message_t decode(char* message);

#endif //STREAMS_MESSAGE_H
