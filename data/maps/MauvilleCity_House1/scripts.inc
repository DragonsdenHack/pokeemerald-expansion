MauvilleCity_House1_MapScripts::
	.byte 0

MauvilleCity_House1_Cientifico::
lock
faceplayer
msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis MSGBOX_AUTOCLOSE
delay 15
msgbox MauvilleCity_House1_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
msgbox MauvilleCity_House1_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

MauvilleCity_House1_Cientifico_Texto_1:
	.string "¡Espera!$"

MauvilleCity_House1_Cientifico_Texto_2:
	.string "¡Ya tienes esa MO!$"


MauvilleCity_House1_EventScript_RockSmashDude::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM06, MauvilleCity_House1_EventScript_ReceivedRockSmash
	msgbox MauvilleCity_House1_Text_ImRockSmashDudeTakeThis, MSGBOX_DEFAULT
	giveitem ITEM_HM06
	setflag FLAG_RECEIVED_HM06
	setflag FLAG_HIDE_ROUTE_111_ROCK_SMASH_TIP_GUY
	msgbox MauvilleCity_House1_Text_ExplainRockSmash, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_EventScript_ReceivedRockSmash::
	msgbox MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House1_Text_ImRockSmashDudeTakeThis:
	.string	"¡Chubidubidú!\p"
	.string	"Algunos me llaman el “MACHACARROCAS”,\n"
	.string	"pero me parece que no es respetuoso.\p"
	.string	"Merezco más consideración. Algo así\n"
	.string	"como el “MAESTRO GOLPE ROCA”.\p"
	.string	"¡Chubidubidú!\p"
	.string	"Guau, tus POKéMON parecen bastante\n"
	.string	"fuertes.\p"
	.string	"¡Así me gusta! ¡Como premio te doy\n"
	.string	"esta MÁQUINA OCULTA!$"

MauvilleCity_House1_Text_ExplainRockSmash:
	.string "That HM contains ROCK SMASH.\p"
	.string "If you come across large boulders\n"
	.string "that block your path…\p"
	.string "Well, use that HM move and smash\n"
	.string "them right out of your way!\p"
	.string "Yes, sir! Smash rocks aside, I say!\n"
	.string "Woohoo!$"

MauvilleCity_House1_Text_MonCanFlyOutOfSmashedRock:
	.string "Oh, yes, if you smash a rock, a POKéMON\n"
	.string "could come flying out of hiding.\p"
	.string "Woohoo!$"

