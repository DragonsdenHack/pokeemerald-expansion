Route14_MapScripts::
	.byte 0

Route14_1::
end


Route14_2::
end


Route14_3::
end



Route14_5::
end


Route14_6::
end


Route14_7::
end


Route14_8::
end


Route14_9::
end


Route14_10::
end


Route14_11::
end


Route14_12::
end


Route14_13::
end


Route14_14::
end



Route14_EventScript_Ornitologo::
	trainerbattle_single TRAINER_SHELBY_2, Route14_Text_OrnitologoIntro, Route14_Text_OrnitologoDefeated
	msgbox Route14_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_SHELBY_3, Route14_Text_Ornitologo2Intro, Route14_Text_Ornitologo2Defeated
	msgbox Route14_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo3::
	trainerbattle_single TRAINER_SHELBY_4, Route14_Text_Ornitologo3Intro, Route14_Text_Ornitologo3Defeated
	msgbox Route14_Ornitologo3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo4::
	trainerbattle_single TRAINER_SHELBY_5, Route14_Text_Ornitologo4Intro, Route14_Text_Ornitologo4Defeated
	msgbox Route14_Ornitologo4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo5::
	trainerbattle_single TRAINER_ISABEL_3, Route14_Text_Ornitologo5Intro, Route14_Text_Ornitologo5Defeated
	msgbox Route14_Ornitologo5PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo6::
	trainerbattle_single TRAINER_ISABEL_4, Route14_Text_Ornitologo6Intro, Route14_Text_Ornitologo6Defeated
	msgbox Route14_Ornitologo6PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista::
	trainerbattle_single TRAINER_BERNIE_4, Route14_Text_MotoristaIntro, Route14_Text_MotoristaDefeated
	msgbox Route14_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_2, Route14_Text_Motorista2Intro, Route14_Text_Motorista2Defeated
	msgbox Route14_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista3::
	trainerbattle_single TRAINER_BERNIE_5, Route14_Text_Motorista3Intro, Route14_Text_Motorista3Defeated
	msgbox Route14_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista4::
	trainerbattle_single TRAINER_BERNIE_3, Route14_Text_Motorista4Intro, Route14_Text_Motorista4Defeated
	msgbox Route14_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14Documento_100::
msgbox Route14Documento_Text_100, MSGBOX_SIGN   
end

Route14Documento_Text_100:
	.string "ROUTE 14\n"
	.string "West to FUCHSIA CITY$"



Route14_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja1Intro, Route14_Text_Pareja1Defeated
	msgbox Route14_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja2Intro, Route14_Text_Pareja2Defeated
	msgbox Route14_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route14_Combate_Azul_Centro::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul_Izq::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3.1
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul_Der::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3.2
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul::
msgbox Route14_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_4.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route14_Combate_Azul_Texto_5 MSGBOX_DEFAULT
delay 20
applymovement 4, Route14_Combate_Azul_Move_4.1
waitmovement 0x0
delay 10
msgbox Route14_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4.2
waitmovement 0x0
delay 10
msgbox Route14_Combate_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_RIVAL
msgbox Route14_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AZUL_2, Route14_Combate_Azul_Texto_8
msgbox Route14_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_10.1 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 4
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 15
playse SE_PIN
applymovement 3, Route14_Combate_Azul_Move_2
waitmovement 0x0
waitse
msgbox Route14_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 64
release
end

Route14_Combate_Azul_Move_4.1:
face_left
step_end

Route14_Combate_Azul_Move_4.2:
walk_in_place_up
step_end

Route14_Combate_Azul_Texto_1:
	.string "BLAU: Hast mich ganz schön warten\n"
	.string "lassen, was {PLAYER}?\p"
	.string "Ich warte hier schon ewig auf dich.$"

Route14_Combate_Azul_Texto_2:
	.string "Ich weiß, was du denkst. Ich sollte\n"
	.string "eigentlich auf dem Weg zu EILAND EINS\l"
	.string "sein, um gegen LAVADOS zu kämpfen. Aber\l"
	.string "seien wir mal ehrlich. Ich werde mit\l"
	.string "dieser Mission viel schneller fertig\l"
	.string "sein, als ihr mit eurer. Mein TURTOK ist\l"
	.string "der perfekte KONTER gegen LAVADOS,\l"
	.string "auch wenn es ein LEGENDÄRES ist …$"

Route14_Combate_Azul_Texto_3:
	.string "ANDRA sollte sich hüten. Eure GOLBATs\n"
	.string "können nichts gegen ZAPDOS ausrichten.\l"
	.string "Ich hoffe, ihre Strategie funktioniert.\p"
	.string "Naja. Mein Teil ist auf jeden Fall der\n"
	.string "Einfachste.$"

Route14_Combate_Azul_Texto_3.1:
	.string "{PAUSE 15}…{PAUSE 15}$"

Route14_Combate_Azul_Texto_4:
	.string "Mein OPA sagte immer, LEGENDÄRE\n"
	.string "POKéMON seien unantastbare Wesen und\l"
	.string "wie unklug es wäre, die auserwählten\l"
	.string "Kinder der Natur herauszufordern.$"
	
Route14_Combate_Azul_Texto_4.1:
	.string "Wie sie einer anderen Welt angehören,\n"
	.string "ihre Ursprünge sich von denen\l"
	.string "sterblicher POKéMON unterscheiden und\l"
	.string "ihre Gene vom Schöpfer persönlich\l"
	.string "perfektioniert wurden.$"

Route14_Combate_Azul_Texto_5:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route14_Combate_Azul_Texto_6:
	.string "Schwachsinn! Was hilft einem das\n"
	.string "Wissen, dass es so unglaubliche POKéMON\l"
	.string "gibt, wenn man sich sowieso nur von\l"
	.string "ihnen versteckt, anstatt\l"
	.string "herauszufinden, wozu man selbst und\l"
	.string "das eigene Team fähig sind?$"

Route14_Combate_Azul_Texto_6.1:
	.string "Es gibt keinen besseren Weg, den Vögeln\n"
	.string "seinen Respekt zu erweisen, als sie mit\l"
	.string "einem Team herauszufordern, das sich\l"
	.string "trotz ungleicher Voraussetzungen\l"
	.string "durch die Fähigkeiten seines TRAINERS\l"
	.string "so viel entwickelt hat, dass es ihnen\l"
	.string "ebenbürtig ist.$"

Route14_Combate_Azul_Texto_7:
	.string "traducir$"

Route14_Combate_Azul_Texto_7.1:
	.string "traducir$"

Route14_Combate_Azul_Texto_7.2:
	.string "traducir$"

Route14_Combate_Azul_Texto_8:
	.string "Dieses Team ist also noch nicht gut\n"
	.string "genug …$"

Route14_Combate_Azul_Texto_9:
	.string "Stück für Stück erkämpfst du dir\n"
	.string "deinen Platz unter den stärksten\l"
	.string "ROCKETs, was? Ich denke, nur ATLAS\l"
	.string "und GIOVANNI könnten dich noch\l"
	.string "fertigmachen.$"

Route14_Combate_Azul_Texto_10:
	.string "Wir haben schon genug Zeit\n"
	.string "verschwendet. Ich mache mich sofort\l"
	.string "auf den Weg zu EILAND EINS. Dieses\l"
	.string "LAVADOS ist besser immun gegen einen\l"
	.string "sehr effektiven SURFER von einem\l"
	.string "TURTOK, dass eine OFFENSIVWESTE trägt,\l"
	.string "womit er jede spezielle Feuer-Attacke\l"
	.string "überstehen wird.$"
	
Route14_Combate_Azul_Texto_10.1:
	.string "Keine göttliche Macht oder überlegene\n"
	.string "Genetik werden es dabei helfen können!$"

Route14_Combate_Azul_Texto_11:
	.string "VOGEL-PROFI: Das war ein wahres\n"
	.string "TAUBOSS! Mir wurde die Ehre zuteil,\l"
	.string "die majestätischen Flügel des besten\l"
	.string "nicht-legendären Vogels der Region\l"
	.string "sehen zu dürfen! Ich wusste, es war\l"
	.string "eine gute Idee diese Route zu nehmen!$"

Route14_Combate_Azul_Move_1:
walk_in_place_down
step_end

Route14_Combate_Azul_Move_2:
emote_exclamation_mark
step_end

Route14_Combate_Azul_Move_3:
walk_right
walk_right
walk_up
walk_up
step_end

Route14_Combate_Azul_Move_3.1:
walk_right
walk_up
walk_up
step_end

Route14_Combate_Azul_Move_3.2:
walk_right
walk_up
walk_right
walk_right
walk_up
step_end

Route14_Combate_Azul_Move_4:
walk_in_place_right
delay_8
walk_in_place_up
step_end
