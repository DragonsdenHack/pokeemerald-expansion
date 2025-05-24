Silph_7F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_7F_OnLoad
	.byte 0

SilphCo_7F_OnLoad::
	call_if_unset FLAG_UNUSED_0x032, EventScript_Close7FDoor1
	call_if_unset FLAG_UNUSED_0x033, EventScript_Close7FDoor2
	call_if_unset FLAG_UNUSED_0x034, EventScript_Close7FDoor3
	end

Silph7F_2::
end



Silph7F_3::
end



Silph7F_4::
end



Silph7F_5::
end



Silph7F_6::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_6_Despues_Invasion
msgbox Silph7F_6_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Despues_Invasion::
msgbox Silph7F_6_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_6_Texto_1:
.string "Nein! Bitte!\n"
	.string "Ich will, dass mich jemand rettet!$"

Silph7F_6_Texto_2:
	.string "Tja. Jetzt bist du nicht mehr so mutig,\n"
	.string "nachdem ihr so kläglich gescheitert\l"
	.string "seid, was!$"



Silph7F_7::
end



Silph7F_8::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_8_Despues_Invasion
msgbox Silph7F_8_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Despues_Invasion::
msgbox Silph7F_8_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_8_Texto_1:
	.string "Der MEISTERBALL wird ein\n"
	.string "Premium-Artikel, den sich nur die\l"
	.string "angesehensten TRAINER werden leisten\l"
	.string "können. Dieser BALL ist eine Nummer zu\l"
	.string "groß für Diebe wie euch!$"


Silph7F_8_Texto_2:
	.string "Look what you've done! Due to your\n"
	.string "fault, our PRESIDENT decided to cancel\l"
	.string "the MASTER BALL project!$"



Silph7F_9::
end



Silph7F_10::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph7F_10_Despues_Invasion
msgbox Silph7F_10_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Despues_Invasion::
msgbox Silph7F_10_Texto_2 MSGBOX_AUTOCLOSE
release
end

Silph7F_10_Texto_1:
	.string "Ihr werdet dieses Unternehmen nie zu\n"
	.string "Fall bringen! Unser PRÄSIDENT weiß, wie\l"
	.string "man mit Dieben wie euch umgeht!$"

Silph7F_10_Texto_2:
	.string "Ihr habt bekommen, was ihr verdient,\n"
	.string "ROCKETs! Jetzt müssen wir nur noch das\l"
	.string "Urteil abwarten!$"



Silph7F_11::
end



Silph7F_12::
lock
faceplayer 
msgbox Silph7F_12_Texto_1 MSGBOX_NPC
release
end



Silph7F_EventScript_Policia::
	trainerbattle_single TRAINER_TALIA, Silph7F_Text_PoliciaIntro, Silph7F_Text_PoliciaDefeated
	msgbox Silph7F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia2::
	trainerbattle_single TRAINER_DONNY, Silph7F_Text_Policia2Intro, Silph7F_Text_Policia2Defeated
	msgbox Silph7F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Policia3::
	trainerbattle_single TRAINER_KATELYN_1, Silph7F_Text_Policia3Intro, Silph7F_Text_Policia3Defeated
	msgbox Silph7F_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Silph7F_EventScript_Cientifico::
	trainerbattle_single TRAINER_BARNY, Silph7F_Text_CientificoIntro, Silph7F_Text_CientificoDefeated
	msgbox Silph7F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



Silph7FDocumento_100::
msgbox Silph7FDocumento_Text_100, MSGBOX_SIGN   
end

Silph7FDocumento_Text_100:
.string "SILPH CO. BÜRO DES PRÄSIDENTEN\n"
    .string "6 OG$"

Silph_7F_Combate_Empleado::
lock
faceplayer
compare VAR_ROUTE131_STATE, 0
goto_if_gt Silph_7F_Combate_Empleado_2
msgbox Silph_7F_Combate_Empleado_Texto_1 MSGBOX_NPC
delay 15
msgbox Silph_7F_Combate_Empleado_Texto_2 MSGBOX_NPC
delay 15
playse SE_PIN
applymovement 9, Silph_7F_Combate_Empleado_Move_1
waitmovement 0x0
msgbox Silph_7F_Combate_Empleado_Texto_3 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_BOY
msgbox Silph_7F_Combate_Empleado_Texto_4 MSGBOX_NPC
trainerbattle_no_intro TRAINER_SILPH, Silph_7F_Combate_Empleado_Texto_5
msgbox Silph_7F_Combate_Empleado_Texto_6 MSGBOX_NPC
setvar VAR_ROUTE131_STATE, 1
release
end

Silph_7F_Combate_Empleado_2::
msgbox Silph_7F_Combate_Empleado_Texto_7 MSGBOX_NPC
release
end



Silph_7F_Combate_Empleado_Move_1:
emote_exclamation_mark
step_end

Silph_7F_Combate_Empleado_Texto_1:
	.string "Ohne den TÜRÖFFNER wird keiner von\n"
	.string "euch zum PRÄSIDENTEN gelangen!$"

Silph_7F_Combate_Empleado_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Silph_7F_Combate_Empleado_Texto_3:
.string "Hmm?\n"
	.string "Du willst, dass ich dir verrate,\n"
	.string "wo du einen findest?$"

Silph_7F_Combate_Empleado_Texto_4:
	.string "Ich bin nicht wie die anderen\n"
	.string "Angestellten hier, ROCKET! Ich werde\l"
	.string "nicht einfach tatenlos dabei zusehen,\l"
	.string "wie ihr uns bedroht! Mach dich bereit,\l"
	.string "vernichtet zu werden!$"

Silph_7F_Combate_Empleado_Texto_5:
	.string "Wurde ich gerade ernsthaft von\n"
	.string "einem ROCKET geschlagen?$"

Silph_7F_Combate_Empleado_Texto_6:
	.string "Okay, okay … Ich rede. Einer unserer\n"
	.string "Angestellten auf Etage 5 ist für die\l"
	.string "Sicherheit zuständig. Er ist ein\l"
	.string "Feigling, also wirst du den TÜRÖFFNER\l"
	.string "ohne Gegenwehr von ihm bekommen, wenn\l"
	.string "du ihn darauf ansprichst.$"

Silph_7F_Combate_Empleado_Texto_7:
	.string "Was willst du denn noch von mir? Ich\n"
	.string "habe dir doch schon alles gesagt, was\l"
	.string "ich weiß! Also lass mich in Ruhe!$"


Silph_7F_Encuentro_Azul_Arriba::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul_Abajo::
lockall
playse SE_WARP_OUT
clearflag FLAG_HIDE_FANCLUB_BOY
addobject 1
applymovement 1, Silph_7F_Encuentro_Azul_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2.1
waitmovement 0x0
goto Silph_7F_Encuentro_Azul

Silph_7F_Encuentro_Azul::
playse MUS_RG_ENCOUNTER_RIVAL
applymovement 1, Silph_7F_Encuentro_Azul_Move_3
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_4
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_5
waitmovement 0x0
playse MUS_RG_SILPH
msgbox Silph_7F_Encuentro_Azul_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_7F_Encuentro_Azul_Move_6
waitmovement 0x0
msgbox Silph_7F_Encuentro_Azul_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_7F_Encuentro_Azul_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_7F_Encuentro_Azul_Move_6.1
waitmovement 0x0
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_7F_Encuentro_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Silph_7F_Encuentro_Azul_Move_7
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_BOY
clearflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 1
addobject 12
setvar VAR_UNUSED_0x40F7, 74
release
end

Silph_7F_Encuentro_Azul_Move_6.1:
face_right
delay_16
delay_8
face_down
delay_16
delay_8
face_player
delay_8
step_end

Silph_7F_Encuentro_Azul_Move_1:
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
face_down
face_right
face_up
face_left
step_end

Silph_7F_Encuentro_Azul_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_2.1:
emote_exclamation_mark
walk_up
walk_in_place_right
step_end

Silph_7F_Encuentro_Azul_Move_2.2:
emote_exclamation_mark
step_end

Silph_7F_Encuentro_Azul_Move_3:
walk_left
walk_left
step_end

Silph_7F_Encuentro_Azul_Move_4:
walk_in_place_down
walk_in_place_left
step_end

Silph_7F_Encuentro_Azul_Move_5:
face_up
step_end

Silph_7F_Encuentro_Azul_Move_6:
face_left
step_end

Silph_7F_Encuentro_Azul_Move_7:
walk_down
walk_left
walk_down
walk_in_place_up
step_end

Silph_7F_Encuentro_Azul_Texto_1:
	.string "Du bist also auch hier, {PLAYER}!$"

Silph_7F_Encuentro_Azul_Texto_2:
	.string "GIOVANNI hat mich ebenfalls\n"
	.string "hierhergeschickt. Er will, dass ich ihn\l"
	.string "auf dem Laufenden halte - vor allem,\l"
	.string "was ROTs Aufenthaltsort angeht. Lass\l"
	.string "uns ihm eine Falle stellen. Er wird\l"
	.string "bestimmt darauf reinfallen, weil er sich\l"
	.string "immer für den Klügsten im Raum hält.\p"
	.string "Hör zu.$"

Silph_7F_Encuentro_Azul_Texto_3:
	.string "ANDRA und ich haben es geschafft, zwei\n"
	.string "TÜRÖFFNER von SILPH-Angestellten in\l"
	.string "die Finger zu kriegen. Ohne die kann ROT\l"
	.string "nicht zum Treffen von GIOVANNI und dem\l"
	.string "PRÄSIDENTEN gelangen - bis wir es\l"
	.string "wollen {PAUSE 15}…{PAUSE 15}$"

Silph_7F_Encuentro_Azul_Texto_4:
	.string "Der Plan ist, diese Karten so lange\n"
	.string "sicher aufzubewahren, bis ihr mir das\l"
	.string "Zeichen gibt, dass GIOVANNI mit seinen\l"
	.string "Verhandlungen fertig ist.$"

Silph_7F_Encuentro_Azul_Texto_5:
	.string "Danach verriegeln wir wieder die Türen\n"
	.string "und platzieren einen der TÜRÖFFNER\l"
	.string "irgendwo im Gebäude hier.$"

Silph_7F_Encuentro_Azul_Texto_6:
	.string "Dieser aufdringliche Idiot wird ihn\n"
	.string "sicher irgendwie finden. Er ist ein\l"
	.string "Experte darin, Sachen von anderen zu\l"
	.string "klauen und seine dreckige Nase in\l"
	.string "Angelegenheiten zu stecken, die ihn\l"
	.string "nichts angehen. Dann wird er uns den\l"
	.string "Gefallen tun, GIOVANNI zu -besiegen-.$"

Silph_7F_Encuentro_Azul_Texto_6.1:
	.string "Der Trottel wird denken, er hätte\n"
	.string "gewonnen. Und glaub mir, das wird er. Er\l"
	.string "ist es gewohnt, gegen viel schlechtere\l"
	.string "Trainer als GIOVANNI zu kämpfen. Dieser\l"
	.string "wird sowieso nur ein mittelmäßiges Team\l"
	.string "hierher mitbringen. Giovanni lässt\l"
	.string "sogar absichtlich nur die schwächeren\l"
	.string "ROCKETs hier zurück, um den\l"
	.string "Unterschied, was Fähigkeiten angeht,\l"
	.string "noch deutlicher zu machen.$"

Silph_7F_Encuentro_Azul_Texto_7:
	.string "Sobald das erledigt ist, habt ihr das,\n"
	.string "was ihr wollt und ich kann mich weiter\l"
	.string "darauf konzentrieren, der nächste\l"
	.string "CHAMP zu werden.$"

Silph_7F_Encuentro_Azul_Texto_8:
	.string "Ihr ROCKETs müsst euch keine Sorgen\n"
	.string "machen. Ihr habt doch sicher lieber\l"
	.string "einen CHAMP, der sich gut mit eurer\l"
	.string "Organisation versteht als jemanden\l"
	.string "wie SIEGFRIED, oder?$"

Silph_7F_Encuentro_Azul_Texto_9:
	.string "Wenn alles gut läuft, könnte sich in\n"
	.string "dieser Region schon bald einiges\l"
	.string "ändern.$"

Silph_7F_Encuentro_Azul_Texto_10:
	.string "Ich werde dich nicht länger aufhalten,\n"
	.string "{PLAYER}. ANDRA hat GIOVANNI bereits\l"
	.string "benachrichtigt. Also wird er schon auf\l"
	.string "dem Weg hierher sein. Kümmer dich um die\l"
	.string "restlichen Sicherheitskräfte, damit\l"
	.string "euer BOSS ungehindert mit dem\l"
	.string "PRÄSIDENTEN sprechen kann, sobald er\l"
	.string "hier eintrifft. Ich bleibe hier und\l"
	.string "warte auf dein Signal, um den TÜRÖFFNER\l"
	.string "heimlich irgendwo zu platzieren, wenn\l"
	.string "die Verhandlungen beendet sind.$"

Silph7F_12_Texto_1:
	.string "BLAU: Beeil dich, {PLAYER} und\n"
	.string "erledige die restlichen\l"
	.string "Sicherheitskräfte, bevor GIOVANNI\l"
	.string "hier ankommt!$"

