LavenderRadioP6_MapScripts::
	.byte 0

LavenderRadioP6_2::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_2:
	.string "I went to a happiness conference; the\n"
	.string "researchers seemed very unhappy.$"




LavenderRadioP6_4::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_4:
	.string "Obvious decisions require only a single\n"
	.string "reason. Progress is that reason!$"




LavenderRadioP6_6::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_6:
	.string "I was there when TEAM ROCKET arrived in\n"
	.string "SAFFRON. The invasion of SILPH made me\l"
	.string "reconsider many things.$"



LavenderRadioP6_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_5, LavenderRadioP6_Text_CientificoIntro, LavenderRadioP6_Text_CientificoDefeated
	msgbox LavenderRadioP6_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


LavenderRadioP6Documento_100::
lock
compare VAR_UNUSED_0x40F7, 212
goto_if_lt RocketHideout7FDocumento_Esperando  
showmonpic SPECIES_PORYGONZ_X, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_100:
.string "PORYGONZ-X:\p"
	.string "HP: 85\n"
	.string "ATTACK: 125\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 95\l"
	.string "SPECIAL DEFENSE: 85\l"
	.string "SPEED: 185\l"
	.string "TOTAL: 645\p"
	.string "TYPE: NORMAL/FLYING\n"
	.string "ABILITY: ADAPTABILITY\l"
	.string "Exploits 99.99% of PORYGON's physical\l"
	.string "offensive capability. Far from fixing\l"
	.string "its vulnerability on the physical side,\l"
	.string "it dedicates all its resources to SPEED.\l"
	.string "Thanks to retaining the ADAPTABILITY\l"
	.string "inherited from PORYGON-Z, its 125\l"
	.string "points in ATTACK will strike with\l"
	.string "immense power, with access to BRAVE\l"
	.string "BIRD or DOUBLE-EDGE for STAB.$"



LavenderRadioP6Documento_101::
lock
compare VAR_UNUSED_0x40F7, 212
goto_if_lt RocketHideout7FDocumento_Esperando   
showmonpic SPECIES_PORYGONZ_Y, 10, 3  
playmoncry SPECIES_PORYGON2, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_101:
.string "PORYGONZ-Y:\p"
	.string "HP: 85\n"
	.string "ATTACK: 70\l"
	.string "DEFENSE: 80\l"
	.string "SPECIAL ATTACK: 185\l"
	.string "SPECIAL DEFENSE: 105\l"
	.string "SPEED: 120\l"
	.string "TOTAL: 645\p"
	.string "TYPE: NORMAL/ELECTRIC\n"
	.string "ABILITY: LEVITATE\l"
	.string "Exploits 99.99% of PORYGON's special\l"
	.string "offensive capability. By pushing its\l"
	.string "SPECIAL ATTACK to the extreme (185), it\l"
	.string "gained the ELECTRIC TYPE as a side\l"
	.string "effect, with LEVITATE being the most\l"
	.string "convenient ABILITY to adapt to this\l"
	.string "change. Without ADAPTABILITY, those\l"
	.string "185 lack the punchiness characteristic\l"
	.string "of other recent prototypes; however,\l"
	.string "its great type combination, notably\l"
	.string "high SPEED (120), and decent special\l"
	.string "bulk (105) put it on par with other top\l"
	.string "experiments.$"



LavenderRadioP6Documento_102::
lock
compare VAR_UNUSED_0x40F7, 212
goto_if_lt RocketHideout7FDocumento_Esperando 
showmonpic SPECIES_PORYGON_Z_MEGA, 10, 3  
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_102:
.string "PORYGONZ-MEGA:\p"
	.string "HP: 85\n"
	.string "ATTACK: 100\l"
	.string "DEFENSE: 90\l"
	.string "SPECIAL ATTACK: 165\l"
	.string "SPECIAL DEFENSE: 95\l"
	.string "SPEED: 110\l"
	.string "TOTAL: 645\p"
	.string "TYPE: NORMAL/PSYCHIC\n"
	.string "ABILITY: HUGE POWER\l"
	.string "In BILL's own words, every last drop of\l"
	.string "performance that a PORYGON could\l"
	.string "aspire to was squeezed into the\l"
	.string "conception of this MEGA EVOLUTION.\l"
	.string "Despite only raising its ATTACK by 20\l"
	.string "compared to PORYGON-Z, this will be its\l"
	.string "best offensive option, thanks to the\l"
	.string "miracle of injecting POWER into a\l"
	.string "Pokémon of these characteristics\l"
	.string "without causing its entire being to\l"
	.string "collapse completely. It manages to\l"
	.string "further improve the extraordinary\l"
	.string "SPECIAL ATTACK that has always\l"
	.string "characterized it, rising to 165 and\l"
	.string "placing it in the debate for the best\l"
	.string "MIXED ATTACKER. Its special bulk (95)\l"
	.string "and even physical bulk (90) are\l"
	.string "exceptional considering the rest.$"



LavenderRadioP6Documento_103::
msgbox LavenderRadioP6Documento_Text_103, MSGBOX_SIGN   
end

LavenderRadioP6Documento_Text_103:
.string "6th Development & Meetings$"



LavenderRadioP6Documento_104::
msgbox LavenderRadioP6Documento_Text_104, MSGBOX_SIGN   
end

LavenderRadioP6Documento_Text_104:
	.string "-The more light there is, the darker the\n"
	.string "shadow.-$"


LavenderRadioP6_Reunion::
lock
removeobject 3
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Reunion_Move_1
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_1 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP6_Reunion_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 10, LavenderRadioP6_Reunion_Move_3
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, LavenderRadioP6_Reunion_Move_4
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_3 MSGBOX_AUTOCLOSE
applymovement 11, LavenderRadioP6_Reunion_Move_5
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_4 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP6_Reunion_Move_6
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, LavenderRadioP6_Reunion_Move_7
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_6 MSGBOX_AUTOCLOSE
applymovement 10, LavenderRadioP6_Reunion_Move_8
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_7 MSGBOX_AUTOCLOSE
applymovement 11, LavenderRadioP6_Reunion_Move_8
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_8 MSGBOX_AUTOCLOSE
applymovement 11, LavenderRadioP6_Reunion_Move_9
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_9 MSGBOX_AUTOCLOSE
applymovement 11, LavenderRadioP6_Reunion_Move_10
waitmovement 0x0
applymovement 10, LavenderRadioP6_Reunion_Move_11
applymovement 5, LavenderRadioP6_Reunion_Move_8
waitmovement 0x0
msgbox LavenderRadioP6_Reunion_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, LavenderRadioP6_Reunion_Move_8
waitmovement 0x0
delay 15
msgbox LavenderRadioP6_Reunion_Texto_11 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
fadescreen 1
delay 20
removeobject 5
removeobject 10
removeobject 11
removeobject 9
addobject 3
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderRadioP6_Reunion_Move_2.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 212
release
end

LavenderRadioP6_Reunion_Move_11:
face_right
step_end

LavenderRadioP6_Reunion_Move_10:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

LavenderRadioP6_Reunion_Move_9:
walk_slow_down
walk_slow_down
step_end

LavenderRadioP6_Reunion_Move_8:
walk_in_place_down
step_end

LavenderRadioP6_Reunion_Move_7:
face_left
step_end

LavenderRadioP6_Reunion_Move_6:
face_down
step_end

LavenderRadioP6_Reunion_Move_5:
walk_in_place_up
step_end

LavenderRadioP6_Reunion_Move_4:
walk_in_place_left
step_end


LavenderRadioP6_Reunion_Move_3:
walk_in_place_right
step_end

LavenderRadioP6_Reunion_Move_2:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
step_end

LavenderRadioP6_Reunion_Move_2.1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
step_end

LavenderRadioP6_Reunion_Move_1:
emote_exclamation_mark
face_left
step_end

LavenderRadioP6_Reunion_Texto_1:
	.string "????: Is DEVON really that dangerous?$"

LavenderRadioP6_Reunion_Texto_2:
	.string "OAK: We don't know what weapons they\n"
	.string "possess; we've just discovered\l"
	.string "Z-MOVES, and they already had\l"
	.string "knowledge of them.$"

LavenderRadioP6_Reunion_Texto_3:
	.string "ELM: In the coming months, we will\n"
	.string "implement the plan devised in\l"
	.string "SPRINGTOWN. It will mark a before and\l"
	.string "after in the way we conceive POKÉMON\l"
	.string "BATTLES; they won't be able to surpass\l"
	.string "that.$"

LavenderRadioP6_Reunion_Texto_4:
	.string "BILL: They also don't know about RADIO\n"
	.string "WAVE technology, as far as we know.$"

LavenderRadioP6_Reunion_Texto_5:
	.string "OAK: Where is your assistant, BILL?\n"
	.string "They should be getting ready for the\l"
	.string "ceremony.$"

LavenderRadioP6_Reunion_Texto_6:
	.string "BILL: He'll be with their FOSSILS, in the\n"
	.string "S3 of SILPH, as always.$"

LavenderRadioP6_Reunion_Texto_7:
	.string "OAK: He should prepare for the\n"
	.string "inauguration; after all, he was one of\l"
	.string "the most interested parties.$"

LavenderRadioP6_Reunion_Texto_8:
	.string "BILL: Bah! He's obsessed with fossils\n"
	.string "of limited potential. We've shown that\l"
	.string "the future lies in PORYGON, MEWTWO, and\l"
	.string "LEGENDARIES like the JOHTO BEASTS.$"

LavenderRadioP6_Reunion_Texto_9:
	.string "Even classic NIDORAN have more\n"
	.string "potential.$"

LavenderRadioP6_Reunion_Texto_10:
	.string "PRESIDENT: ANDRA and {PLAYER}\n"
	.string "should be arriving soon. Let's go up now;\l"
	.string "they'll both be surprised by the\l"
	.string "functionality of the RADIO WAVES.$"

LavenderRadioP6_Reunion_Texto_11:
.string "OAK: Perhaps not so much.$"


LavenderRadioP6_Combate_Bill::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Combate_Bill_Move_1
waitmovement 0x0
delay 20
msgbox LavenderRadioP6_Combate_Bill_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Combate_Bill_Move_2
applymovement 1, LavenderRadioP6_Combate_Bill_Move_3.1
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, LavenderRadioP6_Combate_Bill_Move_4
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 1, LavenderRadioP6_Combate_Bill_Move_5
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_4 MSGBOX_AUTOCLOSE
delay 20
trainerbattle_no_intro TRAINER_BILL_4, LavenderRadioP6_Combate_Bill_Texto_5
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, LavenderRadioP6_Combate_Bill_Move_6
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Combate_Bill_Move_2
waitmovement 0x0
delay 20
msgbox LavenderRadioP6_Combate_Bill_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, LavenderRadioP6_Combate_Bill_Move_7
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderRadioP6_Combate_Bill_Move_3
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, LavenderRadioP6_Combate_Bill_Move_4
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, LavenderRadioP6_Combate_Bill_Move_8
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, LavenderRadioP6_Combate_Bill_Move_9
waitmovement 0x0
msgbox LavenderRadioP6_Combate_Bill_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, LavenderRadioP6_Combate_Bill_Move_10
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_CONTEST_ATTENDANT_2
removeobject 1
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 213
release
end

LavenderRadioP6_Combate_Bill_Move_3.1:
walk_slow_left
walk_slow_down
step_end

LavenderRadioP6_Combate_Bill_Move_10:
walk_right
walk_right
walk_up
walk_right
walk_right
walk_right
walk_up
walk_up
step_end

LavenderRadioP6_Combate_Bill_Move_9:
walk_right
walk_right
walk_up
walk_right
delay_8
walk_in_place_up
delay_8
step_end

LavenderRadioP6_Combate_Bill_Move_8:
walk_up
walk_up
delay_8
walk_in_place_down
delay_8
step_end

LavenderRadioP6_Combate_Bill_Move_7:
emote_exclamation_mark
step_end

LavenderRadioP6_Combate_Bill_Move_6:
lock_facing_direction
walk_fast_up
unlock_facing_direction
step_end

LavenderRadioP6_Combate_Bill_Move_5:
walk_down
step_end

LavenderRadioP6_Combate_Bill_Move_4:
walk_in_place_down
step_end

LavenderRadioP6_Combate_Bill_Move_3:
face_left
step_end

LavenderRadioP6_Combate_Bill_Move_2:
walk_slow_up
step_end

LavenderRadioP6_Combate_Bill_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

LavenderRadioP6_Combate_Bill_Texto_1:
	.string "BILL: Finally, you're here. I was waiting\n"
	.string "for you, {PLAYER}. Did you think I\l"
	.string "would just come up like everyone else?$"

LavenderRadioP6_Combate_Bill_Texto_2:
	.string "The rooftop is the most important\n"
	.string "research area in the entire RADIO\l"
	.string "TOWER, where we can work best with the\l"
	.string "waves. That's why there's only one\l"
	.string "access route.$"

LavenderRadioP6_Combate_Bill_Texto_3:
	.string "That means you're obligated to pass\n"
	.string "through here to go up to the rooftop,\l"
	.string "but also{PAUSE 15}…$"

LavenderRadioP6_Combate_Bill_Texto_4:
	.string "That means you're obligated to battle\n"
	.string "with me once again!$"

LavenderRadioP6_Combate_Bill_Texto_5:
.string "Again?!{PAUSE 15} Why?!$"

LavenderRadioP6_Combate_Bill_Texto_6:
	.string "BILL: What kind of power do you have?\n"
	.string "Why do my Pokémon crush yours in tests\l"
	.string "and reports, but then in practice it\l"
	.string "doesn't happen like that?$"

LavenderRadioP6_Combate_Bill_Texto_7:
.string "{PAUSE 25}…{PAUSE 25}$"

LavenderRadioP6_Combate_Bill_Texto_8:
	.string "The ESSENCE POKÉMON was real and I was\n"
	.string "wrong?! That you've been blessed by it\l"
	.string "and the STRONG BOND? That I'll never be\l"
	.string "able to experience something similar\l"
	.string "with any POKÉMON?$"

LavenderRadioP6_Combate_Bill_Texto_9:
	.string "Bah! I thought you were more serious,\n"
	.string "{PLAYER}. Do you really believe all\l"
	.string "that sentimental garbage you just\l"
	.string "mentioned?$"

LavenderRadioP6_Combate_Bill_Texto_10:
	.string "The only thing that matters is what we\n"
	.string "can measure, and therefore improve. The\l"
	.string "rest of the baseless, lazy concepts will\l"
	.string "be swallowed by the perfection of what\l"
	.string "we can control.$"

LavenderRadioP6_Combate_Bill_Texto_11:
	.string "I'll make the difference so glaring that\n"
	.string "those insignificant details will be\l"
	.string "negligible.$"

LavenderRadioP6_Combate_Bill_Texto_12:
	.string "I'll create a PORYGON4, PORYGON5, or\n"
	.string "even 10 if necessary! When I\l"
	.string "mathematically defeat you with a single\l"
	.string "blow every time and you can't do\l"
	.string "anything, then you can talk to me about\l"
	.string "bonds and other stories.$"

LavenderRadioP6_Encuentro_Andra::
lock
clearflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
addobject 3
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Encuentro_Andra_Move_1
waitmovement 0x0
delay 40
msgbox LavenderRadioP6_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Encuentro_Andra_Move_3
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_2
waitmovement 0x0
delay 20
msgbox LavenderRadioP6_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_8
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_9
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_2.2 MSGBOX_AUTOCLOSE
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_2.3 MSGBOX_AUTOCLOSE
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_4
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_5
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderRadioP6_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_4
waitmovement 0x0
msgbox LavenderRadioP6_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, LavenderRadioP6_Encuentro_Andra_Move_7
applymovement 3, LavenderRadioP6_Encuentro_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
clearflag FLAG_NUEVA_839
removeobject 3
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 214
release
end

LavenderRadioP6_Encuentro_Andra_Move_9:
walk_in_place_right
delay_8
delay_8
face_down
step_end

LavenderRadioP6_Encuentro_Andra_Move_8:
walk_in_place_down
step_end

LavenderRadioP6_Encuentro_Andra_Move_7:
walk_in_place_up
step_end

LavenderRadioP6_Encuentro_Andra_Move_6:
walk_slow_up
walk_slow_up
face_right
step_end

LavenderRadioP6_Encuentro_Andra_Move_5:
walk_in_place_right
step_end

LavenderRadioP6_Encuentro_Andra_Move_4:
face_up
step_end

LavenderRadioP6_Encuentro_Andra_Move_3:
walk_slow_right
walk_in_place_left
step_end

LavenderRadioP6_Encuentro_Andra_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
face_right
step_end

LavenderRadioP6_Encuentro_Andra_Move_1:
emote_exclamation_mark
face_down
step_end

LavenderRadioP6_Encuentro_Andra_Texto_1:
.string "ANDRA: For once, you arrive early.$"

LavenderRadioP6_Encuentro_Andra_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}$"

LavenderRadioP6_Encuentro_Andra_Texto_2.1:
	.string "I've spoken with GIOVANNI, and there's\n"
	.string "no problem regarding the BIKERS. In the\l"
	.string "end, they'll be able to settle in their\l"
	.string "favorite city: FUCHSIA.$"

LavenderRadioP6_Encuentro_Andra_Texto_2.2:
	.string "I think GIOVANNI himself was surprised.\n"
	.string "Both by how lightly he initially treated\l"
	.string "the issue and by how easily it was\l"
	.string "resolved.$"

LavenderRadioP6_Encuentro_Andra_Texto_2.3:
	.string "Honestly, I think all these sudden\n"
	.string "changes are blinding us all a little. And\l"
	.string "all this talk about radio waves, it\l"
	.string "makes me uneasy{PAUSE 15}…$"


LavenderRadioP6_Encuentro_Andra_Texto_3:
	.string "We've been in this situation many times\n"
	.string "before, {PLAYER}. Being expectant,\l"
	.string "about to experience something without\l"
	.string "having any idea what will happen, that\l"
	.string "uncertainty{PAUSE 15}…$"

LavenderRadioP6_Encuentro_Andra_Texto_4:
	.string "But this time, I have a feeling it will be\n"
	.string "different, at least for me.$"

LavenderRadioP6_Encuentro_Andra_Texto_5:
.string "{PAUSE 15}…{PAUSE 15}$"

LavenderRadioP6_Encuentro_Andra_Texto_6:
	.string "I'm not sure I want to see what lies\n"
	.string "beyond those stairs, but we'll cross\l"
	.string "them together.$"



LavenderRadioP6_Octavo_NPC::
lock
faceplayer
msgbox LavenderRadioP6_Octavo_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP6_Octavo_NPC_Texto_1:
	.string "The extraordinary thing is for nothing\n"
	.string "extraordinary to happen for a long\l"
	.string "period of time.$"
