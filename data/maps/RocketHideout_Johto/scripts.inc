RocketHideout_Johto_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, RocketHideout_Johto_OnTransition
map_script MAP_SCRIPT_ON_RESUME, RocketHideout_Johto_OnResume
	.byte 0
	
RocketHideout_Johto_OnTransition::
setflag FLAG_VISITED_ROCKET_HIDEOUT_JOHTO
end

RocketHideout_Johto_OnResume:
	call RocketHideout_Johto_SetupEscapeWarp
	end

RocketHideout_Johto_SetupEscapeWarp::
	setescapewarp MAP_SOUTH_ROUTE45, 6, 114
	return

RocketHideoutJohto1::
end



RocketHideoutJohto2::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_2:
	.string "Is in this base where we gather all the\n"
	.string "resources that JOHTO offers, and we\l"
	.string "transform them into all kinds of POKÉ\l"
	.string "BALLS, POTIONS and other items. That's\l"
	.string "right! From here is where all the\l"
	.string "products that you buy in the CELADON\l"
	.string "BASE come from!$"



RocketHideoutJohto3::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_3:
.string "Have a nice day, sir!$"



RocketHideoutJohto4::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_4:
	.string "This is the second largest ROCKET BASE\n"
	.string "after the main one in CELADON, but\l"
	.string "unlike that one, this one is visible from\l"
	.string "the outside. Nonetheless, despite\l"
	.string "having dimensions similar to the\l"
	.string "POKÉMON TOWER of LAVENDER TOWN,\l"
	.string "there's no need to worry. We are in the\l"
	.string "middle of the mountains, in a hidden\l"
	.string "area far from all civilization.$"



RocketHideoutJohto5::
end



RocketHideoutJohto6::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_6:
	.string "The irregularity of the JOHTO's\n"
	.string "geography is in our favor. No one ever\l"
	.string "will find this base with all the\l"
	.string "mountains around!$"



RocketHideoutJohto7::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_7:
	.string "Many things still have to happen before\n"
	.string "the medium-term future of KANTO takes\l"
	.string "shape.$"



RocketHideoutJohto8::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_8, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_8:
	.string "HP of 125 BASE{PAUSE 15}…{PAUSE 15} PHYSICAL ATTACK of\n"
	.string "175{PAUSE 15}…{PAUSE 15} PHYSICAL DEFENSE of 155{PAUSE 15}…{PAUSE 15} An\l"
	.string "average of 151.6666 BASE among the\l"
	.string "first 3 STATS{PAUSE 15}…{PAUSE 15} …{PAUSE 15} …{PAUSE 15} No, I'm not making up\l"
	.string "this POKÉMON, I'm talking about the\l"
	.string "RHYPERIOR-Z of our LEADER GIOVANNI.\l"
	.string "It's hard for me to believe that there's\l"
	.string "another POKÉMON with a similar physical\l"
	.string "power. Not even the LEGENDARY GROUDON\l"
	.string "comes close!$"



RocketHideoutJohto9::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_9, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_9:
	.string "That BILL has become a complete\n"
	.string "pessimist, as well as arrogant,\l"
	.string "believing he has reached the limit just\l"
	.string "because he can't keep further improving\l"
	.string "his PORYGON. If he saw our last\l"
	.string "discoveries, the expression of\l"
	.string "disbelief on his face as he sees that\l"
	.string "some ROCKETS have surpassed him would\l"
	.string "be legendary, while he would suffer a\l"
	.string "hard blow to his ego as a scientist.$"



RocketHideoutJohto10::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_10:
	.string "If we know all the possible conditions\n"
	.string "of a physic system, we can, in theory,\l"
	.string "its behavior into the future. But this\l"
	.string "only applies with inanimate objects.\l"
	.string "With social questions, we find a\l"
	.string "problem. Projecting the future when\l"
	.string "human beings are involved is radically\l"
	.string "different if we consider they are living\l"
	.string "beings endowed with free will.$"



RocketHideoutJohto11::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_11, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_11:
	.string "The work in the shadows always gives\n"
	.string "big results. when we show ourselves to\l"
	.string "the world they won't recognize what\l"
	.string "they are seeing!$"



RocketHideoutJohto12::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_12:
	.string "Some of the most veteran TRAINERS in\n"
	.string "this region have POKÉMON that exceed\l"
	.string "our measurement parameters. Is the\l"
	.string "theory of the bond between TRAINER\l"
	.string "and POKÉMON really true?$"



RocketHideoutJohto13::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_13, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_13:
	.string "Accessing places where no one else has\n"
	.string "reached demands a huge deployment of\l"
	.string "energy and resources, which is why TEAM\l"
	.string "ROCKET gives an enormous importance to\l"
	.string "its scientific team, knowing the\l"
	.string "invaluable potential that a new\l"
	.string "discovery can have.$"



RocketHideoutJohto14::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_14, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_14:
	.string "The consumption level in JOHTO is much\n"
	.string "lower than that of KANTO, but its\l"
	.string "resources are incomparable.We make\l"
	.string "sure to make good use of them here!$"



RocketHideoutJohto15::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_15:
	.string "So an order with 1000 NET BALLS, 200\n"
	.string "PROTEINS + ZINC, 400 FULL RESTORE and\l"
	.string "3000 LAVA COOKIES…$"



RocketHideoutJohto16::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_16, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_16:
	.string "That LANCE… Allow him to retain his\n"
	.string "titles made of cardboard. Meanwhile, we\l"
	.string "are the ones who are taking the truly\l"
	.string "important decisions.$"



RocketHideoutJohto17::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_17:
	.string "GIOVANNI holds you, ADMIN.BOSS\n"
	.string "{PLAYER} in a very high regard. With\l"
	.string "people like ANDRA and you, TEAM ROCKET\l"
	.string "has a brilliant future.$"



RocketHideoutJohto18::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_18:
	.string "At the end of the 19th century,\n"
	.string "physicist ALBERT MICHELSON stated\l"
	.string "that all that remained to be discovered\l"
	.string "about the laws of nature was merely\l"
	.string "adjusting a few tenths of the\l"
	.string "knowledge of that time. I wonder how he\l"
	.string "would react to everything the 20th\l"
	.string "century has brought. Furthermore, how\l"
	.string "would all those who currently believe\l"
	.string "that we have already reached 99-100%\l"
	.string "of our potential react if they were\l"
	.string "taken to a laboratory from the late\l"
	.string "21st century?$"



RocketHideoutJohto19::
end



RocketHideoutJohto20::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_20:
	.string "The ADMIN.BOSS ANDRA will ensure that\n"
	.string "we are also recognized in HOENN.\l"
	.string "Eventually, the entire POKÉMON WORLD\l"
	.string "will be under our control!$"



RocketHideoutJohto21::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_21:
	.string "No one knows the precise moment when\n"
	.string "our LEADER's RHYPERIOR reached that\l"
	.string "point which made it evolve once again,\l"
	.string "however, thanks to being able to study\l"
	.string "it, we were able to create NIDOKING-X\l"
	.string "and NIDOQUEEN-Y, although raising\l"
	.string "their stats by +100 BASE instead of the\l"
	.string "+110 of GIOVANNI's RHYPERIOR…$"



RocketHideoutJohto22::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_22:
	.string "Excuse me sir, the access to the upper\n"
	.string "floors is restricted to personnel\l"
	.string "directly involved in the ongoing\l"
	.string "projects, I've heard that GIOVANNI\l"
	.string "intends to introduce you to them, but\l"
	.string "in due time. Until then, good luck during\l"
	.string "your time in JOHTO!$"



RocketHideoutJohto23::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_23:
	.string "Understanding the finer details of\n"
	.string "daily routine can be pointless and even\l"
	.string "harmful, so it's vital to know how to\l"
	.string "separate the wheat from the chaff.$"



RocketHideoutJohto24::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_24:
	.string "The GOLDENROD CITY RADIO TOWER is\n"
	.string "quickly becoming JOHTO's version of\l"
	.string "SILPH in terms of power and influence.\l"
	.string "It wouldn't surprise me if our LEADER\l"
	.string "arranges a business meeting there soon\l"
	.string "as well.$"



RocketHideoutJohto25::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_25:
	.string "Excluding GOLDENROD CITY and OLIVINE\n"
	.string "CITY, the rest of JOHTO's population\l"
	.string "lives in rural areas or areas with\l"
	.string "significant historical significance,\l"
	.string "such as ECRUTEAK CITY.$"



RocketHideoutJohto26::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_26:
	.string "Despite winning the war, much of\n"
	.string "JOHTO's population has continued to\l"
	.string "live with the simplicity and frugality\l"
	.string "that characterizes them. To be honest,\l"
	.string "the only one who forced that war was\l"
	.string "LANCE, and the people here know it,\l"
	.string "perhaps due to that, the process of\l"
	.string "unification between the two regions\l"
	.string "will be faster, the first step is to open\l"
	.string "the borders settled in ROUTE 26 and at\l"
	.string "the base of MT. SILVER…$"



RocketHideoutJohto27::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_27, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_27:
	.string "Everything's under control, sir! It's a\n"
	.string "pleasure to have you on JOHTO!$"



RocketHideoutJohto28::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_28, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_28:
    .string "The majestic TOHJO FALLS are\n"
    .string "historically what have geographically\l"
    .string "separated KANTO from JOHTO, although\l"
    .string "work is already being done on means of\l"
    .string "transportation to connect them by\l"
    .string "other routes.$"



RocketHideoutJohto29::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_29, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_29:
	.string "I would love to have a PERSIAN, but in\n"
    .string "JOHTO, unless you're one of those snobs\l"
    .string "from GOLDENROD CITY, you'll need a ton\l"
    .string "of luck to stumble upon a wild MEOWTH.\l"
    .string "Although a GRANBULL wouldn't be a bad\l"
    .string "choice either.$"



RocketHideoutJohto30::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_30, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_30:
	.string "JOHTO is yours, sir! Show all them, the\n"
    .string "TEAM ROCKET power!$"



RocketHideoutJohto31::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_31, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_31:
.string "1000 REVIVES and 700 HYPER POTIONS…\n"
.string "Seriously{PAUSE 20}…{PAUSE 20} What's wrong with the\l"
.string "GRUNTS from KANTO? Do they all carry\l"
.string "RATTATAS and ZUBATS?$"



RocketHideoutJohto32::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_32, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_32:
.string "Working outside the law makes me feel\n"
.string "so alive! Nobody cares about the limits,\l"
.string "from here we'll build whatever we want!$"



RocketHideoutJohto33::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_33, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_33:
.string "Our own work! Our own work for and by\n"
	.string "the TEAM ROCKET! That is the right way\l"
	.string "to work!$"



RocketHideoutJohto34::
lock     
faceplayer     
msgbox RocketHideoutJohto_Text_34, MSGBOX_DEFAULT
release     
end

RocketHideoutJohto_Text_34:
.string "We've achieved that NON-LEGENDARY\n"
	.string "POKÉMON, such as NIDOKING and\l"
	.string "NIDOQUEEN, easily surpass the 600 BASE\l"
	.string "STATS, a figure that was considered\l"
	.string "impossible to exceed for any mortal\l"
	.string "POKÉMON. The truth is that with\l"
	.string "NIDOKING-X we did an extraordinary job,\l"
	.string "thanks to its ADAPTABILITY, an ATTACK\l"
	.string "of 142 BASE and a SPEED of 125, it is a\l"
	.string "true enemy-shredding machine.$"



RocketHideoutJohtoDocumento_100::
lock        
msgbox RocketHideoutJohtoDocumento_Text_100, MSGBOX_DEFAULT
release     
end

RocketHideoutJohtoDocumento_Text_100:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}\l"
	.string "Laboratory techniques to\l"
	.string "maximize the potential of\l"
	.string "any POKÉMON.\l"
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}\l"
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}\l"
	.string "It has more than 500 pages!$"



RocketHideoutJohto_EventScript_ReceiveRalts::
    lock
    faceplayer
	checkmoncatch SPECIES_RALTS
	goto_if_eq VAR_RESULT, FALSE, RocketHideoutJohto_EventScript_TakeRalts 
	msgbox RocketHideoutJohto_Text_19, MSGBOX_DEFAULT
	release
	end



RocketHideoutJohto_EventScript_TakeRalts::
    msgbox RocketHideoutJohto_Text_TakeRalts MSGBOX_DEFAULT
	msgbox RocketHideoutJohto_Text_TakeRalts2 MSGBOX_DEFAULT
	msgbox RocketHideoutJohto_Text_TakeRalts3 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox RocketHideoutJohto_Text_MensajeRalts, MSGBOX_DEFAULT
	givemon SPECIES_RALTS, 10, ITEM_PSYCHIC_GEM
	waitfanfare  
	release
	end 



RocketHideoutJohto_Text_TakeRalts:
.string "There are many PSYCHIC POKÉMON beyond\n"
.string "ALAKAZAM or HYPNO, even beyond ESPEON\l"
.string "or XATU in JOHTO.$"



RocketHideoutJohto_Text_TakeRalts2:
.string "The problem is that KANTO and JOHTO\n"
.string "have always been very closed to other\l"
.string "regions.$"



RocketHideoutJohto_Text_TakeRalts3:
.string "However, a colleague of mine who works\n"
.string "at DEVON gave me a pair of PSYCHIC\l"
.string "POKÉMON from HOENN. He said it was the\l"
.string "ALAKAZAM from that region, I'd like a\l"
.string "ROCKET like you to have one.$"




RocketHideoutJohto_Text_MensajeRalts:
.string "YOU OBTAINED A LV.10 RALTS!$"


RocketHideoutJohto_Text_19:
.string "I've heard that RALTS has 2 final\n"
.string "evolutions, a PHYSICAL offensive one\l"
.string "and an SPECIAL offensive one.$"

BaseRocketJohto_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_JOHTO, 0
switch VAR_RESULT
case 0, EventScript_Fletching
case 1, EventScript_Mudbray
case 2, EventScript_Pincurchin
case 3, EventScript_Pawniard
case 4, EventScript_Turtwig
case 5, EventScript_Popplio
case 6, EventScript_Spiritomb
case 7, EventScript_Axew
release
end

EventScript_Axew::
lock
showmoneybox 0, 0
msgbox EventScript_Axew_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 140000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 140000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_AXEW, 34, ITEM_NONE
release
end

EventScript_Spiritomb::
lock
showmoneybox 0, 0
msgbox EventScript_Spiritomb_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 115000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 115000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_SPIRITOMB, 62, ITEM_NONE
release
end

EventScript_Popplio::
lock
showmoneybox 0, 0
msgbox EventScript_Poplio_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 76000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 76000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_POPPLIO, 16, ITEM_NONE
release
end


EventScript_Turtwig::
showmoneybox 0, 0
msgbox EventScript_Turtwig_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 75000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 75000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_TURTWIG, 17, ITEM_NONE
release
end

EventScript_Pawniard::
showmoneybox 0, 0
msgbox EventScript_Pawniard_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 65000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 65000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_PAWNIARD, 50, ITEM_NONE
release
end

EventScript_Pincurchin::
showmoneybox 0, 0
msgbox EventScript_Pincurchin_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 52000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 52000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_PINCURCHIN, 45, ITEM_NONE
release
end

EventScript_Mudbray::
showmoneybox 0, 0
msgbox EventScript_Mudbray_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 32000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 32000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_MUDBRAY, 28, ITEM_NONE
release
end

EventScript_Fletching::
showmoneybox 0, 0
msgbox EventScript_Fletching_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 18000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 18000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_FLETCHLING, 16, ITEM_NONE
release
end

EventScript_Axew_Texto_1:
.string "Are you sure you want AXEW?\n"
	.string "It will cost 140,000 POKÉ.$"

EventScript_Spiritomb_Texto_1:
.string "Are you sure you want SPIRITOMB?\n"
	.string "It will cost 115,000 POKÉ.$"

EventScript_Turtwig_Texto_1:
.string "Are you sure you want TURTWIG?\n"
	.string "It will cost 75,000 POKÉ.$"

EventScript_Pawniard_Texto_1:
.string "Are you sure you want PAWNIARD?\n"
	.string "It will cost 65,000 POKÉ.$"

EventScript_Pincurchin_Texto_1:
.string "Are you sure you want PINCURCHIN?\n"
	.string "It will cost 52,000 POKÉ.$"

EventScript_Mudbray_Texto_1:
.string "Are you sure you want MUDBRAY?\n"
	.string "It will cost 32,000 POKÉ.$"

EventScript_Fletching_Texto_1:
.string "Are you sure you want FLETCHLING?\n"
	.string "It will cost 18,000 POKÉ.$"
