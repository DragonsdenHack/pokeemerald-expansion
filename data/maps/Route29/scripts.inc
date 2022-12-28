Route29_MapScripts::
	.byte 0

Route29_1::
end



Route29_2::
end



Route29_3::
lock     
faceplayer     
msgbox Route29_Text_3, MSGBOX_DEFAULT
release     
end

Route29_Text_3:
.string "No hay muchos PIKACHU por aquí.\n"
.string "¡Seré la envidia de todos cuando\l"
.string "lo lleve a CIUDAD TRIGAL!$"



Route29_4::
end



Route29_5::
end



Route29_6::
end



Route29_7::
end



Route29_8::
end



Route29_9::
lock     
faceplayer     
msgbox Route29_Text_9, MSGBOX_DEFAULT
release     
end

Route29_Text_9:
.string "Esta zona está siendo sujeta a\n"
.string "diversas pruebas por parte del\l"
.string "PROF.ELM y sus ayudantes, nadie\l"
.string "puede entrar sin su\l"
.string "consentimiento.\l"
.string "De todos modos, no hay nada que\l"
.string "ver aquí chico, más al este está\l"
.string "la frontera con KANTO, y nadie\l"
.string "puede pasar de ahí sin\l"
.string "consentimiento expreso, al menos\l"
.string "hasta que la relación entre KANTO\l"
.string "y JOHTO mejore.$"



Route29_10::
lock     
faceplayer     
msgbox Route29_Text_10, MSGBOX_DEFAULT
release     
end

Route29_Text_10:
.string "Esta ruta, junto con la del norte\n"
.string "de CIUDAD CEREZO, es famosa por\l"
.string "contar con POKÉMON únicos que solo\l"
.string "pueden encontrarse en JOHTO.\l"
.string "¡Por eso he venido aquí!$"



Route29_11::
end



Route29_12::
end



Route29_13::
lock     
faceplayer     
msgbox Route29_Text_13, MSGBOX_DEFAULT
release     
end

Route29_Text_13:
.string "¡Ah!\n"
.string "¡Qué bien sienta salir a pasear en\l"
.string "medio de toda esta vegetación!\l"
.string "¡Me siento joven otra vez!$"



Route29_14::
lock     
faceplayer     
msgbox Route29_Text_14, MSGBOX_DEFAULT
release     
end

Route29_Text_14:
.string "El PROF.ELM es una eminencia del\n"
.string "mundo de los POKÉMON, está\l"
.string "montando su laboratorio de\l"
.string "investigaciones al este de aquí.$"



Route29_15::
lock     
faceplayer     
msgbox Route29_Text_15, MSGBOX_DEFAULT
release     
end

Route29_Text_15:
.string "Esta zona está siendo sujeta a\n"
.string "diversas pruebas por parte del\l"
.string "PROF.ELM y sus ayudantes, nadie\l"
.string "puede entrar sin su\l"
.string "consentimiento.\l"
.string "De todos modos, no hay nada que\l"
.string "ver aquí chico, más al este está\l"
.string "la frontera con KANTO, y nadie\l"
.string "puede pasar de ahí sin\l"
.string "consentimiento expreso, al menos\l"
.string "hasta que la relación entre KANTO\l"
.string "y JOHTO mejore.$"



Route29_16::
lock     
faceplayer     
msgbox Route29_Text_16, MSGBOX_DEFAULT
release     
end

Route29_Text_16:
.string "Me encantaría poder visitar la\n"
.string "RUTA 26, dicen que es de las más\l"
.string "bonitas de la región. Esperemos\l"
.string "que pronto la reabran para toda la\l"
.string "población…$"



Route29_EventScript_Chico::
	trainerbattle_single TRAINER_BRICE, Route29_Text_ChicoIntro, Route29_Text_ChicoDefeated
	msgbox Route29_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end


Route29_EventScript_Sabio::
	trainerbattle_single TRAINER_JAMES_5, Route29_Text_SabioIntro, Route29_Text_SabioDefeated
	msgbox Route29_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route29Documento_100::
msgbox Route29Documento_Text_100, MSGBOX_SIGN   
end

Route29Documento_Text_100:
	.string "RUTA 29\n"
	.string "Al oeste CIUDAD CEREZO$"



Route29Documento_101::
msgbox Route29Documento_Text_101, MSGBOX_SIGN   
end

Route29Documento_Text_101:
	.string "¡Aviso!\n"
	.string "¡Frontera con KANTO al entrar en\l"
	.string "RUTA 26, más al este!$"
