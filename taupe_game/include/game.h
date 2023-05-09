
#ifndef GAME_H_
    #define GAME_H_
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>
    #include <SFML/Graphics/Export.h>
    #include <SFML/Graphics.h>
    #include <SFML/Window/Mouse.h>
    #include <SFML/Audio/Export.h>
    #include <SFML/Audio/SoundStatus.h>
    #include <SFML/Audio/Types.h>
    #include <SFML/Audio.h>
    #include <SFML/System/InputStream.h>
    #include <SFML/System/Time.h>
    #include <SFML/System/Vector3.h>
    #include <stddef.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <SFML/System/Export.h>
    #include <SFML/System/Types.h>
    #include <stdlib.h>
    #include  <math.h>
    #include <sys/stat.h>
    #include <sys/syscall.h>
    #include <time.h>
    #include <fcntl.h>
    typedef struct game {
        sfRenderWindow *win;
        sfVideoMode mode;
        sfEvent event;
    }game;
#endif
