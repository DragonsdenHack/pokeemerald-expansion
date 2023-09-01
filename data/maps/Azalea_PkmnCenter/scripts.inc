Azalea_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Azalea_PokemonCenter_1F_OnTransition
	.byte 0

Azalea_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_AZALEA_TOWN
	end

Azalea_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

AzaleaPkmnCenter1::
end



AzaleaPkmnCenter2::
lock     
faceplayer     
msgbox AzaleaPkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaPkmnCenter_Text_2:
.string "CÉSAR no quiere reconocerlo, pero\n"
.string "es con diferencia el mayor\l"
.string "especialista del TIPO BICHO que\l"
.string "hay en JOHTO. A diferencia de ese\l"
.string "jóven ANTÓN, prefiere mantener sus\l"
.string "dotes como ENTRENADOR en el\l"
.string "anonimato.$"



AzaleaPkmnCenter3::
lock     
faceplayer     
msgbox AzaleaPkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaPkmnCenter_Text_3:
.string "Algún día, KANTO y JOHTO volverán a\n"
.string "estar unidas.\l"
.string "¡Se verá!$"



AzaleaPkmnCenter4::
end



AzaleaPkmnCenter_EventScript_ReceiveWimpod::
    lock
    faceplayer
	checkmoncatch SPECIES_WIMPOD
	goto_if_eq VAR_RESULT, FALSE, AzaleaPkmnCenter_EventScript_TakeWimpod 
	msgbox AzaleaPkmnCenter_Text_1, MSGBOX_DEFAULT
	release
	end



AzaleaPkmnCenter_EventScript_TakeWimpod::
    msgbox AzaleaPkmnCenter_Text_TakeWimpod MSGBOX_DEFAULT
	msgbox AzaleaPkmnCenter_Text_TakeWimpod2 MSGBOX_DEFAULT
	msgbox AzaleaPkmnCenter_Text_TakeWimpod3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox AzaleaPkmnCenter_Text_MensajeWimpod, MSGBOX_DEFAULT
	givemon SPECIES_WIMPOD, 10, ITEM_BUG_GEM
	waitfanfare  
	release
	end 



AzaleaPkmnCenter_Text_TakeWimpod:
   .string "¡Un forastero, bienvenido!$"



AzaleaPkmnCenter_Text_TakeWimpod2:
   .string "Debes saber que este lugar y el\n"
	.string "ENCINAR antes estaban unidos. Todo\l"
	.string "era vegetación, los niños\l"
	.string "jugábamos y vivíamos en pleno\l"
	.string "bosque, rodeados de POKÉMON TIPO\l"
	.string "BICHO.$"



AzaleaPkmnCenter_Text_TakeWimpod3:
	.string "En ese ambiente creció CÉSAR, que\n"
	.string "aún se mantiene activo en su\l"
	.string "GIMNASIO pasados los 60 años.\l"
	.string "Gracias a sus viajes trajo varios\l"
	.string "POKÉMON de otras regiones, y dió\l"
	.string "algunos ejemplares a sus más\l"
	.string "allegados. Quiero que tú tengas\l"
	.string "uno también.$"



AzaleaPkmnCenter_Text_MensajeWimpod:
.string "¡OBTUVISTE UN WIMPOD AL NV.10!$"


AzaleaPkmnCenter_Text_1:
    .string "¡Ni se te ocurra subestimar a ese\n"
	.string "renacuajo!\l"
	.string "¡Cuando crece, obtiene la fuerza de\l"
	.string "un HERACROSS y la solidez de un\l"
	.string "SKARMORY!$"
