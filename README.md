# TP_MCU

## TP MCU by Kévin OKONSKI et Jérôme DUPOUTS

![image](https://user-images.githubusercontent.com/125466579/225709386-0c18407f-e58a-407d-8489-4a63a83acfa7.png)

- PB9 est relié à la masse car cette PIN correspond à BOOT0. Ici ont relie à la masse afin que le BOOT se fasse dans la memoire Flash.

![image](https://user-images.githubusercontent.com/125466579/225711961-0cbdb225-7b04-4b91-9631-63dbd51acf8d.png)

- Le role de L1, C5 et C7 est de réaliser un filtre passe bas pour éliminer les parasites sur l'alimentation 3.3V. On utilise par la suite cette tension au niveau de VDDA qui est la PIN de l'ADC


![image](https://user-images.githubusercontent.com/125466579/225713425-0951e7d1-b6d4-456e-a947-a6c6d941fa72.png)

![image](https://user-images.githubusercontent.com/125466579/225713473-0ec5d65a-7e45-4c93-aac5-911e6161603f.png)

- C'est la première page qui indique les valeurs des condensateurs, mais on retrouve à la page 1 les valeurs typiques : 
![image](https://user-images.githubusercontent.com/125466579/225715611-f8c5215c-45ae-4b72-a6ff-5de95e371cf7.png)

![image](https://user-images.githubusercontent.com/125466579/225714090-1bfb86b0-bb4a-4f74-ba3d-a8e80c10d1ac.png)

- C'est à la page 25 que l'on retrouve l'information : 
![image](https://user-images.githubusercontent.com/125466579/225717110-af3f8de6-dfc3-4576-91e5-3cbd194df82e.png)

![image](https://user-images.githubusercontent.com/125466579/225717252-28166763-a798-43f9-9027-8cf742e6578e.png)

- CS signifie Chip Select et permet d'activer la communication SPI, elle est valide à l'état Bas

![image](https://user-images.githubusercontent.com/125466579/225717500-8fb6d702-99c5-4148-8234-7d9b548ab12a.png)

- la PIN LDAC (latch DAC synchronization input) permet de transféré l'entrée à la sortie du DAC. Lorsque l'entrée est à l'état bas la sortie recopie l'entrée.

![image](https://user-images.githubusercontent.com/125466579/225720304-a2f5f671-9ed8-40fa-9543-ea6e929d8f62.png)

- Le MCP n'est pas activé car on ne renvoie pas d'information au STM32.

![image](https://user-images.githubusercontent.com/125466579/225720472-11973f7c-7a84-4133-87f1-77f3d25f7a26.png)

- On retrouve les indications du PinOut du connecteur SWD dans la documentation du STlink à la page 17


![image](https://user-images.githubusercontent.com/125466579/225721339-077c2be4-0d61-4cb2-bc82-beea29c3f105.png)

![image](https://user-images.githubusercontent.com/125466579/225721460-db52873f-cfe0-4c71-a413-b398a063d183.png)

- Ces valeurs est une indiquation sur la tailles des différents composants

![image](https://user-images.githubusercontent.com/125466579/225721772-a54bc03f-8ba9-4d54-8615-67c21d833a5c.png)

- Les boîtiers Dummy Low Profile Quad Flat Pack (LQFP) sont des types de boitiers de circuit intégré destiné à être directement soudé sur un circuit imprimé.

![image](https://user-images.githubusercontent.com/125466579/225722685-a013c936-662a-42e9-b523-bc260fdb7004.png)

![image](https://user-images.githubusercontent.com/125466579/225722762-c4ebb275-a35c-49fa-9091-58092ddcd285.png)

- ![image](https://user-images.githubusercontent.com/125466579/225723387-a52b5978-263f-4a1c-adb6-baf03fdb3d80.png)
on choisit donc un prescaler à 63, (16000000/1000)/256













![Screenshot](screenshot.png)


------------------------------------------------------------------------------
![image](https://user-images.githubusercontent.com/125466579/223980670-0ea654f9-17f8-446e-b1f9-97c7840d6524.png)

![image](https://user-images.githubusercontent.com/125466579/223980507-3857d2ae-9456-44b5-9b9a-b656f4222e2e.png)
------------------------------------------------------------------------------
