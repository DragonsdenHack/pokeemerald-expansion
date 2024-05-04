SSTidalLowerDeck_MapScripts::
	.byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_BRUNO_1, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_BRUNO_1, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_Text_PhillipIntro:
	.string "Arrrgh! I'm fed up and dog-tired of\n"
	.string "cleaning this huge place!\p"
	.string "Let's have a quick battle!$"

SSTidalLowerDeck_Text_PhillipDefeat:
	.string "Little bro, I lost!$"

SSTidalLowerDeck_Text_PhillipPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Text_LeonardIntro:
	.string "This is the bottom of the ship's hull.\n"
	.string "There's plenty of room.\l"
	.string "It'll be alright for a POKéMON battle.$"

SSTidalLowerDeck_Text_LeonardDefeat:
	.string "Big bro, I lost!$"

SSTidalLowerDeck_Text_LeonardPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Combates::
lock
msgbox SSTidalLowerDeck_Combates_Texto_1 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_2 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_3 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_4 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_5 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_6 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_7 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_8 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_9 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_10 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_11 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_12 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_13 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_14 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_15 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_16 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Combates_Texto_17 MSGBOX_AUTOCLOSE
release
end

SSTidalLowerDeck_Combates_Texto_1:
	.string "ARIANA: Ha sido un éxito {PLAYER}.\n"
	.string "Ahora solo tenemos que escondernos\l"
	.string "aquí y esperar.$"

SSTidalLowerDeck_Combates_Texto_2:
	.string "¿Qué hacéis aquí? El evento es arriba.$"

SSTidalLowerDeck_Combates_Texto_3:
	.string "No sois los primeros listos que\n"
	.string "pretenden ir de polizón a CALAGUA. ¡En\l"
	.string "guardia!$"

SSTidalLowerDeck_Combates_Texto_4:
	.string "ARIANA: No merece la pena discutir.\n"
	.string "Acabemos con esto, {PLAYER}.$"

SSTidalLowerDeck_Combates_Texto_5:
	.string "¡El SS.MAREA va a quedar limpio de tipos\n"
	.string "como tú!$"

SSTidalLowerDeck_Combates_Texto_6:
	.string "¡Me limpiaron a mí!$"

SSTidalLowerDeck_Combates_Texto_7:
	.string "Grrr{PAUSE 15}…{PAUSE 15} Encima te resistes, ¡mis bravos\n"
	.string "POKÉMON no tendrán piedad contigo!$"

SSTidalLowerDeck_Combates_Texto_8:
	.string "¿Yo también perdí?$"

SSTidalLowerDeck_Combates_Texto_9:
	.string "P{PAUSE 15}-{PAUSE 15}Pero{PAUSE 15}…{PAUSE 15} ¿Quiénes sois vosotros?$"

SSTidalLowerDeck_Combates_Texto_10:
	.string "ARIANA: ARBOK, DESLUMBRAR contra los\n"
	.string "marineros.$"

SSTidalLowerDeck_Combates_Texto_11:
	.string "ARBOK: ¡Bok!$"

SSTidalLowerDeck_Combates_Texto_12:
	.string "(Los marineros quedaron petrificados)$"

SSTidalLowerDeck_Combates_Texto_13:
	.string "ARIANA: ¿Qué? ¿Tienes algún problema\n"
	.string "con eso?$"

SSTidalLowerDeck_Combates_Texto_14:
	.string "Es el único modo de no echar a perder el\n"
	.string "plan, ¿o prefieres dejarlos escapar y\l"
	.string "que avisen a toda DEVON de que estamos\l"
	.string "aquí?$"

SSTidalLowerDeck_Combates_Texto_15:
	.string "Ahora, ayúdame a esconderlos en esos\n"
	.string "contenedores. No te preocupes, para\l"
	.string "cuando lleguemos a CALAGUA, podrán\l"
	.string "volver a moverse.$"

SSTidalLowerDeck_Combates_Texto_16:
	.string "Bien. Si vuelve a entrar alguien,\n"
	.string "repetimos el mismo procedimiento,\l"
	.string "¿entendido?$"

SSTidalLowerDeck_Combates_Texto_17:
	.string "Voy a esconderme en el fondo del\n"
	.string "ALMACÉN. Hasta que el barco no salga de\l"
	.string "PORTUAL, deberíamos permanecer allí.$"


SSTidalLowerDeck_Submarino::
lock
msgbox SSTidalLowerDeck_Submarino_Texto_1 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Submarino_Texto_2 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Submarino_Texto_3 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Submarino_Texto_4 MSGBOX_AUTOCLOSE
msgbox SSTidalLowerDeck_Submarino_Texto_5 MSGBOX_AUTOCLOSE
release
end

SSTidalLowerDeck_Submarino_Texto_1:
	.string "ARIANA: Esto no debería estar aquí.\n"
	.string "Parece que conecta con algo ajeno al\l"
	.string "barco. Qué extraño…$"

SSTidalLowerDeck_Submarino_Texto_2:
	.string "????: Muy bien. Ahora, empieza el\n"
	.string "verdadero evento.$"

SSTidalLowerDeck_Submarino_Texto_3:
	.string "ARIANA: Ese es{PAUSE 25}…{PAUSE 25} la mano derecha del\n"
	.string "PRESIDENTE.$"

SSTidalLowerDeck_Submarino_Texto_4:
	.string "ADMIN.AMATISTA: ¡Todos adentro!$"

SSTidalLowerDeck_Submarino_Texto_5:
	.string "ARIANA: ¡Rápido, {PLAYER}! ¡No\n"
	.string "tenemos otra opción!$"

