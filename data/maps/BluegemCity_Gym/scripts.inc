BluegemCity_Gym_MapScripts::
	.byte 0


BluegemCity_Gym_EventScript_UnpushableBoulder::
# 5 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 6 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_Unpushable, MSGBOX_AUTOCLOSE
# 7 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_UncuttableTree::
# 13 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 14 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_Uncuttable, MSGBOX_AUTOCLOSE
# 15 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_UnbreakableRock::
# 21 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 22 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_Uncuttable, MSGBOX_AUTOCLOSE
# 23 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_TreeBall::
# 30 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 31 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_1
# 32 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_TreeBall, MSGBOX_AUTOCLOSE
# 33 "data/maps/BluegemCity_Gym/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


BluegemCity_Gym_EventScript_RockBall::
# 38 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 39 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_2
# 40 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_RockBall, MSGBOX_AUTOCLOSE
# 41 "data/maps/BluegemCity_Gym/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


BluegemCity_Gym_EventScript_BoulderBall::
# 46 "data/maps/BluegemCity_Gym/scripts.pory"
	lockall
# 47 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_MOSSDEEP_GYM_SWITCH_3
# 48 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_BoulderBall, MSGBOX_AUTOCLOSE
# 49 "data/maps/BluegemCity_Gym/scripts.pory"
	removeobject VAR_LAST_TALKED
	end


BluegemCity_Gym_EventScript_MarcBattle::
# 54 "data/maps/BluegemCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARC, BluegemCity_Gym_Text_Marc_Intro, BluegemCity_Gym_Text_Marc_Outro
# 55 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_PostBattle_Marc, MSGBOX_AUTOCLOSE
# 56 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_PaulBattle::
# 62 "data/maps/BluegemCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PAUL, BluegemCity_Gym_Text_Paul_Intro, BluegemCity_Gym_Text_Paul_Outro
# 63 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_PostBattle_Paul, MSGBOX_AUTOCLOSE
# 64 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_GarrisonBattle::
# 70 "data/maps/BluegemCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GARRISON, BluegemCity_Gym_Text_Garrison_Intro, BluegemCity_Gym_Text_Garrison_Outro
# 71 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_PostBattle_Garrison, MSGBOX_AUTOCLOSE
# 72 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_AlanBattle::
# 78 "data/maps/BluegemCity_Gym/scripts.pory"
	trainerbattle_double TRAINER_ALAN, BluegemCity_Gym_Text_Alan_Intro, BluegemCity_Gym_Text_Alan_Outro, BlueGemCity_Gym_Text_NotEnoughPokemon
# 79 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_PostBattle_Alan, MSGBOX_AUTOCLOSE
# 80 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
	end


BluegemCity_Gym_EventScript_Josh::
# 86 "data/maps/BluegemCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH_1, BluegemCity_Gym_Text_Josh_Intro, BluegemCity_Gym_Text_Josh_Outro, BluegemCity_Gym_EventScript_JoshDefeated, NO_MUSIC
# 87 "data/maps/BluegemCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, RustboroCity_Gym_EventScript_GiveRockTomb
# 88 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_JoshPostBattle, MSGBOX_DEFAULT
# 89 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
# 90 "data/maps/BluegemCity_Gym/scripts.pory"
	release
	end


BluegemCity_Gym_EventScript_JoshDefeated::
# 96 "data/maps/BluegemCity_Gym/scripts.pory"
	message BluegemCity_Gym_Text_ReceivedGraniteBadge
# 97 "data/maps/BluegemCity_Gym/scripts.pory"
	waitmessage
# 98 "data/maps/BluegemCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 99 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_GraniteBadgeInfoTakeThis, MSGBOX_DEFAULT
# 100 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_DEWFORD_GYM
# 101 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 102 "data/maps/BluegemCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 103 "data/maps/BluegemCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 104 "data/maps/BluegemCity_Gym/scripts.pory"
	goto BluegemCity_Gym_EventScript_GiveRockTomb
	end


BluegemCity_Gym_EventScript_GiveRockTomb::
# 109 "data/maps/BluegemCity_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 110 "data/maps/BluegemCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 111 "data/maps/BluegemCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 112 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 113 "data/maps/BluegemCity_Gym/scripts.pory"
	release
	end


BluegemCity_Gym_EventScript_GymGuide::
# 118 "data/maps/BluegemCity_Gym/scripts.pory"
	lock
# 119 "data/maps/BluegemCity_Gym/scripts.pory"
	faceplayer
# 120 "data/maps/BluegemCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, BluegemCity_Gym_EventScript_GymGuidePostVictory
# 121 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 122 "data/maps/BluegemCity_Gym/scripts.pory"
	release
	end


BluegemCity_Gym_EventScript_GymGuidePostVictory::
# 127 "data/maps/BluegemCity_Gym/scripts.pory"
	msgbox BluegemCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 128 "data/maps/BluegemCity_Gym/scripts.pory"
	release
	end


BluegemCity_Gym_Text_Uncuttable::
# 132 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "You can't use CUT indoors!$"

BluegemCity_Gym_Text_Unpushable::
# 137 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "It's too heavy! You can't push this.$"

BluegemCity_Gym_Text_TreeBall::
# 141 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "{PLAYER} destroyed a TREE!$"

BluegemCity_Gym_Text_RockBall::
# 145 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "{PLAYER} destroyed a ROCK!$"

BluegemCity_Gym_Text_BoulderBall::
# 149 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "{PLAYER} destroyed a BOULDER!$"

BluegemCity_Gym_Text_Marc_Intro::
# 153 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "We might be in the middle of town,\n"
	.string "but so what?\p"
	.string "My ROCK POKéMON need room to\n"
	.string "rampage!$"

BluegemCity_Gym_Text_Marc_Outro::
# 160 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "Oh, man oh man!\n"
	.string "Our challenger is one feisty customer!$"

BluegemCity_Gym_Text_PostBattle_Marc::
# 165 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "I have to hand it to our LEADER.\p"
	.string "It took smarts and sense for him to\n"
	.string "pick the ROCK type at his young age.$"

BluegemCity_Gym_Text_Paul_Intro::
# 171 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "Don't take us GYM TRAINERS lightly!\n"
	.string "I'll show you why we're better!$"

BluegemCity_Gym_Text_Paul_Outro::
# 176 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "You were too good for me…$"

BluegemCity_Gym_Text_PostBattle_Paul::
# 180 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "You haven't seen anything of the ROCK\n"
	.string "type's terrifying power!$"

BluegemCity_Gym_Text_Garrison_Intro::
# 185 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "If I don't crush you, JOSH will!$"

BluegemCity_Gym_Text_Garrison_Outro::
# 189 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "My ROCK types were to weak!$"

BluegemCity_Gym_Text_PostBattle_Garrison::
# 193 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "You beat me, but you still have more\n"
	.string "up ahead!$"

BluegemCity_Gym_Text_Alan_Intro::
# 198 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "Hehehe, you don't stand a chance!$"

BluegemCity_Gym_Text_Alan_Outro::
# 202 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "My plan failed!$"

BluegemCity_Gym_Text_PostBattle_Alan::
# 206 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "I thought I could beat you with my\n"
	.string "SELF-DESTRUCTING POKéMON!$"

BluegemCity_Gym_Text_Josh_Intro::
# 211 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "...\p"
	.string "{PLAYER}, isn't it?\n"
	.string "My friend AGUSTIN told me about you.\p"
	.string "You think you're quite the hotshot\n"
	.string "after beating his gym?\p"
	.string "I'll be sure to wipe that grin off\n"
	.string "your stupid face.$"

BluegemCity_Gym_Text_Josh_Outro::
# 222 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "I fear I've been outdone.$"

BluegemCity_Gym_Text_ReceivedGraniteBadge::
# 226 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "{PLAYER} received the GRANITE BADGE\n"
	.string "from JOSH.$"

BluegemCity_Gym_Text_GraniteBadgeInfoTakeThis::
# 231 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "The GRANITE BADGE enables your POKéMON\n"
	.string "to use the HM move CUT outside of battle\p"
	.string "Take this with you, too.$"

BluegemCity_Gym_Text_ExplainRockTomb::
# 237 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"

BluegemCity_Gym_Text_JoshPostBattle::
# 247 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "I'll be brutally honest, I don't\n"
	.string "think you have what it takes to challenge\l"
	.string "the next six GTN LEADERS.\p"
	.string "But whatever, go ahead and try to prove\n"
	.string "me wrong or something.$"

BluegemCity_Gym_Text_GymSatue::
# 255 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "BLUEGEM CITY POKéMON GYM$"

BluegemCity_Gym_Text_GymGuidePostVictory::
# 259 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "Whoa! What a breathtaking victory!\n"
	.string "My cheering must've worked!\p"
	.string "Great!\n"
	.string "Check your TRAINER CARD.\p"
	.string "The STONE BADGE you got should be\n"
	.string "properly recorded on it.\p"
	.string "Congrats!$"

BluegemCity_Gym_Text_GymGuideAdvice::
# 269 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "What's good, CHAMP-in-the-making?\p"
	.string "This GYM PUZZLE is neat, you have to\n"
	.string "activate all of the POKéBALL switches\l"
	.string "to pave the way to the GYM LEADER!\p"
	.string "Be careful though, guarding each switch\n"
	.string "is a threatening GYM TRAINER!\p"
	.string "JOSH, the GYM LEADER, is a user\n"
	.string "of ROCK-type POKéMON.\p"
	.string "The ROCK type is very durable, but\n"
	.string "it can't stand WATER-type and\l"
	.string "GRASS-type moves.\p"
	.string "Come see me afterwards, if you beat\n"
	.string "the GYM LEADER.\p"
	.string "Well, go for it!$"

BlueGemCity_Gym_Text_NotEnoughPokemon::
# 286 "data/maps/BluegemCity_Gym/scripts.pory"
	.string "C'mon man, solve this puzzle!\n"
	.string "You need at least two POKémon!$"
