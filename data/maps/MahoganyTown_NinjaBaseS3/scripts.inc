MahoganyTown_NinjaBaseS3_MapScripts::
	.byte 0

NinjaBaseS3_1::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_1:
	.string "It is said that PRYCE possesses a\n"
	.string "unique form of ARTICUNO; its PRIMAL\l"
	.string "form, I guess. I wonder if there are\l"
	.string "equivalents for ZAPDOS and MOLTRES…$"



NinjaBaseS3_2::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_2:
.string "If I am honest…\n"
.string "I don't understand any of these blueprints…$"



NinjaBaseS3_3::
end



NinjaBaseS3_4::
end



NinjaBaseS3_5::
end



NinjaBaseS3_7::
lock
faceplayer
msgbox NinjaBaseS3_7_Texto_1 MSGBOX_NPC
release
end

NinjaBaseS3_7_Texto_1:
	.string "How far do you think we'll get with all\n"
	.string "of this?$"



NinjaBaseS3_8::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_8, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_8:
	.string "The progress in terms of BASE STATs for\n"
	.string "POKÉMON over the last six months has\l"
	.string "been remarkable. Do you think POKÉMON\l"
	.string "like NIDOKING or NIDOQUEEN will cease\l"
	.string "to be considered strong after such a\l"
	.string "significant increase in the standard?$"



NinjaBaseS3_9::
lock     
faceplayer     
msgbox MahoganyTown_NinjaBaseS3_Text_9, MSGBOX_DEFAULT
release     
end

MahoganyTown_NinjaBaseS3_Text_9:
	.string "No one is as powerful as TEAM ROCKET is.\n"
	.string "Three bases in KANTO, two bases in\l"
	.string "JOHTO, one in HOENN, and another one in\l"
	.string "the SEVII ISLANDS! We are omnipresent!$"



NinjaBaseS3_10::
end



NinjaBaseS3_11::
end



NinjaBaseS3_12::
end



NinjaBaseS3_15::
end



NinjaBaseS3_EventScript_Calvo::
	trainerbattle_single TRAINER_CRISTIN_1, NinjaBaseS3_Text_CalvoIntro, NinjaBaseS3_Text_CalvoDefeated
	msgbox NinjaBaseS3_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end



NinjaBaseS3_EventScript_Ladron::
	trainerbattle_single TRAINER_BEAU, NinjaBaseS3_Text_LadronIntro, NinjaBaseS3_Text_LadronDefeated
	msgbox NinjaBaseS3_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end

NinjaBaseS3_EventScript_Ninja::
	trainerbattle_single TRAINER_TONY_2, NinjaBaseS3_Text_NinjaIntro, NinjaBaseS3_Text_NinjaDefeated
	msgbox NinjaBaseS3_Text_NinjaPostBattle, MSGBOX_AUTOCLOSE
	end


MahoganyTown_NinjaBaseS3_Combates_Finales::
lock
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_1
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3
waitmovement 0x0
waitse
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAY_RUSTBORO_TREECKO, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_7
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4
waitmovement 0x0
waitse
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_7
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_8
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CELIA, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_11
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2
waitmovement 0x0
waitse
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_9
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BROOKE_3, MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_14
playse SE_PIN
applymovement 13, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.2
applymovement 6, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.2
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_15 MSGBOX_AUTOCLOSE
delay 30
applymovement 14, MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.3
waitmovement 0x0
delay 10
msgbox MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
clearflag FLAG_RECEIVED_SHOAL_SALT_2
fadescreen 1
removeobject 6
removeobject 13
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 164
release
end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.1:
lock_facing_direction
walk_slow_up
unlock_facing_direction
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.2:
emote_exclamation_mark
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6.3:
delay_8
face_left
delay_16
delay_8
face_right
delay_16
delay_8
face_down
delay_8
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_1:
	.string "As you have seen from these estimates,\n"
	.string "selling RAGE CANDIES is not profitable.\l"
	.string "I believe we should try something more\l"
	.string "impactful, like SLOWPOKE T…$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_2:
.string "Who are you?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_3:
	.string "How did a ROCKET reach here? Reclaim\n"
	.string "the MAHOGANY BASE? It was never yours;\l"
	.string "we simply took advantage of PRYCE's\l"
	.string "negligence to set up our operational\l"
	.string "center here.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_4:
	.string "You shouldn't have interrupted this\n"
	.string "meeting. If you've made it this far\l"
	.string "through all the security, it means\l"
	.string "you're exhausted.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_5:
.string "TARO!\n"
	.string "Make him disappear!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_6:
	.string "Your POKÉMON lack the freshness\n"
	.string "needed to face my team anymore. En\l"
	.string "garde!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_7:
.string "It can't be!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_8:
	.string "So, you're still standing. I see you're\n"
	.string "not like the other ROCKETS.\l"
	.string "It's said that your strength lies only\l"
	.string "in the group, may be false after all.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9:
.string "You can be the best TRAINER among us.\p"
	.string "But that doesn't matter here.\p"
	.string "You play with our rules here.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_9.1:
	.string "MACUTO!\p"
	.string "Finish him!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_10:
	.string "I'm going to crush you with all my sheer\n"
	.string "force. You'll see why they call me the\l"
	.string "biggest CUE BALL in all of JOHTO!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_11:
.string "You!\n"
	.string "How dare you!?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_12:
	.string "I'm so tired of you. Do you think you can\n"
	.string "come to JOHTO and do whatever you\l"
	.string "want?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_13:
	.string "I'll be the one to finish you personally.\n"
	.string "This base will finally belong to us.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_14:
.string "How is this possible?\n"
	.string "You should be tired already!$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_15:
.string "No…\n"
	.string "This wasn't in our plans…\l"
	.string "After all, we won't be able to start\l"
	.string "here once again. You win, right?$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Texto_16:
	.string "I hope you'll at least put it to good use.$"

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_1:
walk_up
walk_up
walk_up
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_2:
emote_exclamation_mark
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_3:
emote_exclamation_mark
walk_in_place_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_4:
walk_in_place_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_5:
walk_left
face_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_6:
face_up
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_7:
walk_right
face_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_8:
walk_down
walk_down
step_end

MahoganyTown_NinjaBaseS3_Combates_Finales_Move_9:
walk_left
walk_down
walk_down
walk_down
walk_down
step_end

MahoganyTown_NinjaBaseS3_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Llamada_Giovanni_Move_1
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
setvar VAR_UNUSED_0x40F7, 162
release
end

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_down

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: {PLAYER}?\p"
	.string "Are you in MAHOGANY TOWN?\p"
	.string "Perfect.\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "Well, I was going to send ARCHER and\n"
	.string "ANDRA to recover the MAHOGANY BASE,\l"
	.string "but I trust in you; I hope it can be\l"
	.string "cleared and ready to work as soon as\l"
	.string "possible.$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_2:
	.string "So you have defeated the GREAT MASTER\n"
	.string "of ECRUTEAK? The evolution mechanism\l"
	.string "of his EEVEE-& is a mystery. It can\l"
	.string "transform into the type of every single\l"
	.string "move it executes. He must have been a\l"
	.string "tough opponent.\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "HO-OH appeared?!\n"
	.string "At the top of BELL TOWER?!\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "A TRAINER who only uses MAJOR\n"
	.string "LEGENDARIES caught HO-HO?!{PAUSE 25}\p"
	.string "He had LUGIA too!?$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_3:
.string "That changes the game.\p"
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}\n"
	.string "Then{PAUSE 15}…{PAUSE 15} you already meet him at SEVII?\p"
	.string "He must be someone very dangerous, and\n"
	.string "maybe he's looking for the same thing\l"
	.string "we are. I will redouble the guard at\l"
	.string "RUINS OF ALPH.$"

MahoganyTown_NinjaBaseS3_Llamada_Giovanni_Texto_4:
.string "Be careful, {PLAYER}.\p"
	.string "We must act accordingly.\n"
	.string "We'll be in touch again soon.$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja::
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1
playse SE_NOTE_C
dofieldeffectsparkle 9, 12, 0
waitfieldeffect FLDEFF_SPARKLE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Primera_Trampa_Move_1.1
waitmovement 0x0
delay 30
playse SE_NOTE_C_HIGH
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
addobject 4
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, NinjaBaseS1_Cuarta_Trampa_Move_2
waitmovement 0x0
msgbox MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_WATTSON_3, MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_2
msgbox MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
fadescreen 1
delay 20
removeobject 4
fadescreen 0
setvar VAR_UNUSED_0x40F7, 163
release
end

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_1:
	.string "You're the core of TEAM ROCKET.\n"
	.string "I'll finish you off!$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_2:
.string "Damn it!$"

MahoganyTown_NinjaBaseS3_Combate_Ultimo_Ninja_Texto_3:
	.string "Not even a TEAM ROCKET officer can kick\n"
	.string "us out of here. Unity is strength.$"
