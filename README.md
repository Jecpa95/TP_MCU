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



![Screenshot](screenshot.png)


------------------------------------------------------------------------------
![image](https://user-images.githubusercontent.com/125466579/223980670-0ea654f9-17f8-446e-b1f9-97c7840d6524.png)

![image](https://user-images.githubusercontent.com/125466579/223980507-3857d2ae-9456-44b5-9b9a-b656f4222e2e.png)
------------------------------------------------------------------------------
