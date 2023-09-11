# Commandes utiles

## Forcer la génération du ui_passwordgenerator.h

Pour générer le bon fichier ui_passwordgenerator.h qui correspond à des modifications que l'on a fait dans le fichier passwordgenerator.ui : 

```
uic.exe -o .\ui_passwordgenerator.h .\passwordgenerator.ui
```

## Créer le répertoire pour une release

Pour créer le répertoire de release avec toutes les DLL nécessaire il suffit de lancer la commande suivante : 

```
windeployqt --dir RELEASE_PATH SOURCE_CODE
```

# Code à modifier à la main

Je ne sais pas pour quel raison pour l'instant mais il est nécessaire de modifier à la main le passwordgenerator.ui pour corriger la ligne "connect" qui plante à la compilation par : 

```
QSlider::connect(TailleMDP, &QSlider::valueChanged, ValeurTailleMdp, QOverload<int>::of(&QLabel::setNum));
```

Cette modification est à faire dès qu'on a regénéré le fichier **ui_passwordgenerator.h**.
		
		
		
	
