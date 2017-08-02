#ifndef _DEFINE_H
#define _DEFINE_H




/******************************************************************************************************************
	#1. File Names
*******************************************************************************************************************/
#define MESSAGE_DLL_1				".\\Mirmg.dll"
#define MIR2_PATCH_FILE_NAME		".\\Mir2Patch.exe"




/******************************************************************************************************************
	#1. Procedeure Define
*******************************************************************************************************************/
#define _LOGIN_PROC					0
#define _SVR_SEL_PROC				1
#define _CHAR_SEL_PROC				2
#define _GAME_PROC					3





/******************************************************************************************************************
	#1. Mouse Wheel Define
*******************************************************************************************************************/
#ifndef WM_MOUSEWHEEL
#define WM_MOUSEWHEEL				WM_MOUSELAST+1 
#endif





/******************************************************************************************************************
	#1. User Define Message
*******************************************************************************************************************/
#define _WM_USER_MSG_INPUTTED		WM_USER + 1005				// 俊叼飘冠胶 涝仿皋矫瘤. 皋矫瘤啊 目盖靛老版快 wParam蔼篮 TRUE肺 技泼等促.
#define ID_SOCKCLIENT_EVENT_MSG		WM_USER + 1000				// 家南捞亥飘皋矫瘤.





/******************************************************************************************************************
	#1. Image Define Message
*******************************************************************************************************************/
#define _IMAGE_TILES				0
#define _IMAGE_TILES30				1
#define _IMAGE_TILES5				2
#define _IMAGE_SMTILES				3
#define _IMAGE_HOUSES				4
#define _IMAGE_CLIFFS				5
#define _IMAGE_DUNGEONS				6
#define _IMAGE_INNERS				7
#define _IMAGE_FUNITURES			8
#define _IMAGE_WALLS				9
#define _IMAGE_SMOBJECTS			10
#define _IMAGE_ANIMATIONS			11
#define _IMAGE_OBJECT1				12
#define _IMAGE_OBJECT2				13
#define _IMAGE_INTER				14
#define _IMAGE_M_HUMAN				15
#define _IMAGE_M_HAIR				16
#define _IMAGE_M_WEAPON1			17
#define _IMAGE_M_WEAPON2			18
#define _IMAGE_M_WEAPON3			19
#define _IMAGE_M_WEAPON4			20
#define _IMAGE_WM_HUMAN				21
#define _IMAGE_WM_HAIR				22
#define _IMAGE_WM_WEAPON1			23
#define _IMAGE_WM_WEAPON2			24
#define _IMAGE_WM_WEAPON3			25
#define _IMAGE_WM_WEAPON4			26
#define _IMAGE_MAGIC				27
#define _IMAGE_ITEM_INVENTORY		28
#define _IMAGE_ITEM_EQUIP			29
#define _IMAGE_ITEM_GROUND			30
#define _IMAGE_MICON				31
#define _IMAGE_PROGUSE				32
#define _IMAGE_HORSE				33
#define _IMAGE_MONSTER1				34
#define _IMAGE_MONSTER2				35
#define _IMAGE_MONSTER3				36
#define _IMAGE_MONSTER4				37
#define _IMAGE_MONSTER5				38
#define _IMAGE_MONSTER6				39
#define _IMAGE_MONSTER7				40
#define _IMAGE_MONSTER8				41
#define _IMAGE_MONSTER9				42
#define _IMAGE_MONSTER10			43
#define _IMAGE_MONSTER11			44
#define _IMAGE_MONSTER12			45
#define _IMAGE_SMONSTER1			46
#define _IMAGE_SMONSTER2			47
#define _IMAGE_SMONSTER3			48
#define _IMAGE_SMONSTER4			49
#define _IMAGE_SMONSTER5			50
#define _IMAGE_SMONSTER6			51
#define _IMAGE_SMONSTER7			52	
#define _IMAGE_SMONSTER8			53
#define _IMAGE_SMONSTER9			54
#define _IMAGE_SMONSTER10			55	
#define _IMAGE_SMONSTER11			56
#define _IMAGE_SMONSTER12			57
#define _IMAGE_NPC					58
#define _IMAGE_MONMAGIC				59
#define _IMAGE_INTEREX				60

#define _MAX_MONSTER_IMAGE			12

#define _MAX_IMAGE					61

#define _TEXTR_FILE_MAGIC			0
#define _TEXTR_FILE_MONMAGIC		1
#define _TEXTR_FILE_MAP				2
#define _TEXTR_FILE_INTER			3

#define _MAX_TEXTR_FILE				4




/******************************************************************************************************************
	#1. Item Define
*******************************************************************************************************************/
#define _ITEM_TYPE_INVENTORY		0
#define _ITEM_TYPE_EQUIP			1
#define _ITEM_TYPE_GROUND			2

#define _INVENTORY_CELL_WIDTH		38
#define _INVENTORY_CELL_HEIGHT		38

#define _CHAT_COLOR1				0	//RGB(  0,   0,   0); // 捧苞祸.
#define _CHAT_COLOR2				1	//RGB( 10,  10,  10); // 八沥祸.
#define _CHAT_COLOR3				2	//RGB(255, 255, 255); // 闰祸.
#define _CHAT_COLOR4				3	//RGB(255,   0,   0); // 弧碍.
#define _CHAT_COLOR5				4	//RGB(  0, 255,   0); // 踌祸.
#define _CHAT_COLOR6				5	//RGB(  0,   0, 255); // 仟弗祸
#define _CHAT_COLOR7				6	//RGB(255, 255,   0); // 畴尔祸.
#define _CHAT_COLOR8				7	//RGB(255, 128,   0); // 林炔祸

#define _USER_NAMECLR1				255	//RGB(255, 255, 255); 闰祸
#define _USER_NAMECLR2				251	//RGB(255, 255,   0); 畴鄂祸
#define _USER_NAMECLR3				249	//RGB(255,   0,   0); 弧埃祸
#define _USER_NAMECLR4				125	//RGB(255,   0,   0); ??祸(搬拌救 阁胶磐祸)
#define _USER_NAMECLR5				47	//RGB(165,  99,  57); 哎祸
#define _USER_NAMECLR6				180	//RGB(  0,   0, 255); 仟弗祸
#define _USER_NAMECLR7				69	//RGB(239, 107,   0); 林炔祸
#define _USER_NAMECLR8				221	//RGB(  0, 148,   0); 踌祸
#define _USER_NAMECLR9				254	//RGB(  0, 255, 255); 祸
#define _USER_NAMECLR10				147	//RGB(140, 214, 239); 祸
#define _USER_NAMECLR11				154	//RGB( 57, 181, 239); 祸
#define _USER_NAMECLR12				229	//RGB(119, 136, 255); 祸
#define _USER_NAMECLR13				168	//RGB(  0, 123, 222); 祸
#define _USER_NAMECLR14				252	//RGB(  0,   0, 255); 祸




/******************************************************************************************************************
	#1. Actor Define
*******************************************************************************************************************/
#define _GENDER_MAN					0
#define _GENDER_WOMAN				1
#define _GENDER_NPC					50
#define _GENDER_MON					3//77
#define _MAX_GENDER					4

#define _TARGETRGN_GAPX				10
#define _TARGETRGN_GAPY				8

#define _MAX_HERO_KIND				10
#define _MAX_MON_KIND				255
#define _MAX_NPC_KIND				29

#define _MAX_DIRECTION				8
#define _DIRECTION_LIST_1			0
#define _DIRECTION_LIST_2			1
#define _DIRECTION_LIST_3			2
#define _DIRECTION_LIST_4			3
#define _DIRECTION_LIST_5			4
#define _DIRECTION_LIST_6			5	 
#define _DIRECTION_LIST_7			6
#define _DIRECTION_LIST_8			7	

#define _DEFAULT_SPELLFRAME			10
#define _DEFAULT_DELAYTIME			300

#define _HAIR_NONE					0
#define _MAX_HAIR					7

#define _WEAPON_NONE				0		
#define _MAX_WEAPON					32		

#define _HORSE_NONE					0
#define _MAX_HORSE					4

#define	_MAX_WEAPON_MTN				25
#define	_MAX_WEAPON_FRAME			3000

#define	_START_HORSE_FRAME			2320
#define	_START_HORSE_MTN			29
#define	_MAX_HORSE_FRAME			400

#define _MY_CENTER_XPOS				400
#define _MY_CENTER_YPOS	    		243

#define _MAX_CHAT_LINE				5
#define _CHAT_WIDTH					144
//#define _GAPX_TILE_CHAR_MAP		11
//#define _GAPY_TILE_CHAR_MAP		11 
#define _GAPX_TILE_CHAR_MAP			12
#define _GAPY_TILE_CHAR_MAP			12 
#define _CHAR_CENTER_XPOS			400
#define _CHAR_CENTER_YPOS	    	243

#define _SPEED_WALK					1
#define _SPEED_RUN					2
#define _SPEED_HORSERUN				3

#define _MOTION_LOCKTIME			8000
#define _WARMODE_TIME				5000

#define _JOB_DOSA					2
#define _JOB_SULSA					1
#define _JOB_JUNSA					0

#define _STATE_RED					64690
#define _STATE_GREEN				2016
#define _STATE_BLUE					38079//31
#define _STATE_YELLOW				65504
#define _STATE_FUCHSIA				64511
#define _STATE_GRAY					0
#define _STATE_ABLEND				1
#define _STATE_SHIELDUSE			2
#define _STATE_NOTUSED				0XFFFF

#define _RUN_MINHEALTH				10

#define _DIG_NORMAL					0
#define _DIG_UP						1
#define _DIG_DOWN					2
#define _DIG_DOWNDEL				3


/******************************************************************************************************************
	#1. Sprite Define
*******************************************************************************************************************/
// Hero狼 悼累 沥狼.(霸烙郴狼 葛电 悼累阑 沥狼茄促.)

#define _MAX_HERO_MTN				33			// 弥措 悼累肮荐.
#define _MAX_HERO_FRAME				3000		// 促澜 Hero肺 逞绢啊绰 弥措 橇饭烙 肮荐.
#define	_MAX_HERO_REALFRAME			2640

#define _MT_STAND					0			// 蜡绒悼累.
#define _MT_ARROWATTACK				1			// 劝傍拜.
#define _MT_SPELL1					2			// 付过 矫傈1.
#define _MT_SPELL2					3			// 付过 傍拜 矫傈2.
#define _MT_HOLD					4			// 斑叼扁.
#define _MT_PUSHBACK				5			// 第肺 剐妨唱扁.
#define _MT_PUSHBACKFLY				6			// 第肺 朝扼辑 剐妨唱扁.
#define _MT_ATTACKMODE				7			// 傈捧葛靛.
#define _MT_CUT						8			// 绊扁 戒扁.
#define _MT_ONEVSWING				9			// 茄颊 辆海扁.(悼累 9锅何磐 14锅鳖瘤俊辑 公扁狼 辆幅俊 蝶扼 悼累捞 沥秦柳促.)
#define _MT_TWOVSWING				10			// 滴颊 辆海扁.
#define _MT_ONEHSWING				11			// 茄颊 染海扁.
#define _MT_TWOHSWING				12			// 滴颊 染海扁.	
#define _MT_SPEARVSWING				13			// 芒 辆海扁.
#define _MT_SPEARHSWING				14			// 芒 染海扁.
#define _MT_HITTED					15			// 嘎扁.
#define _MT_WHEELWIND				16			// 倒搁辑 海扁.
#define _MT_RANDSWING				17			// 付备 海扁.
#define _MT_BACKDROPKICK			18			// 第倒酒 瞒扁.
#define _MT_DIE						19			// 磷扁.
#define _MT_SPECIALDIE				20			// 脾绢棵扼 磷扁.
#define _MT_WALK					21			// 叭扁.
#define _MT_RUN						22			// 崔府扁.
#define _MT_MOODEPO					23			// 公怕焊 顿扁.
#define _MT_ROLL					24			// 备福扁.
#define _MT_FISHSTAND				25			// 超矫葛靛 蜡绒.
#define _MT_FISHHAND				26			// 超矫葛靛.
#define _MT_FISHTHROW				27			// 超矫临 带瘤扁.
#define _MT_FISHPULL				28			// 超矫临 寸扁扁.
#define _MT_HORSESTAND				29			// 铰付葛靛 蜡绒.
#define _MT_HORSEWALK				30			// 铰付葛靛 叭扁.
#define _MT_HORSERUN				31			// 铰付葛靛 崔府扁.
#define _MT_HORSEHIT				32			// 铰付葛靛 嘎扁.

// Monster狼 悼累 沥狼.(霸烙郴狼 葛电 悼累阑 沥狼茄促.)
#define _MAX_MON_MTN				10			// 弥措 悼累肮荐.
#define _MAX_MON_FRAME				1000		// 促澜 Mon肺 逞绢啊绰 弥措 橇饭烙 肮荐.

#define _MT_MON_STAND				0			// 蜡绒悼累.
#define _MT_MON_WALK				1			// 叭扁悼累.
#define _MT_MON_ATTACK_A			2			// 老馆傍拜悼累1.
#define _MT_MON_HITTED				3			// 嘎扁悼累.
#define _MT_MON_DIE					4			// 磷扁悼累.
#define _MT_MON_ATTACK_B			5			// 老馆傍拜悼累2.
#define _MT_MON_SPELL_A				6			// 付过傍拜悼累1.
#define _MT_MON_SPELL_B				7			// 付过傍拜悼累2.
#define _MT_MON_APPEAR				8			// 唱鸥唱扁悼累.
#define _MT_MON_SPECIAL_MTN			9			// 漂荐悼累1.


// NPC狼 悼累 沥狼.(霸烙郴狼 葛电 悼累阑 沥狼茄促.)
// NPC 包访沥狼.
#define _MAX_NPC_MTN				3			// 弥措 悼累肮荐.
#define _MAX_NPC_FRAME				100			// 促澜 NPC肺 逞绢啊绰 弥措 橇饭烙 肮荐.

#define _MT_NPC_STAND				0			// 蜡绒悼累.
#define _MT_NPC_ACT01				1			// 漂荐悼累1.
#define _MT_NPC_ACT02				2			// 漂荐悼累2.

// 扁档.							0			
// 公扁措厘厘捞.					1			
// 规绢备措厘厘捞.					2			
// 咯包辆诀盔.						3			
// 墨款磐.							4			
// 版概救郴磊.						5			
// 绊鞭荤辑.						6			
// 档辑包版厚.						7			
// 荤辑.							8			
// 立荐贸.							9			
// 距檬且酒滚瘤.					10			
// 狼幅惑.							11			
// 林痢NPC.							12			
// 荤阜傈荤.						13			
// 措厘埃辆诀盔.					14			
// 档冠厘氓烙磊.					15			
// 烤朝措厘厘捞.					16			
// 烤朝距规畴牢.					17			
// 烤朝氓规畴牢.					18			
// 棱惑牢.							19			
// 棱拳惑.							20			
// 棱拳惑.							21			
// 棱拳惑.							22			
// 痢里捞.							23			
// 器格惑.							24			
// 咯包酒淋付.						25
// 澜侥痢且硅.						26
// 沥腊痢林牢.						27			
// 青沥包.							28			





// 付过瓤苞包访沥狼.
#define _MAX_EFFECT					33
#define _MAX_MAGIC					52
#define _MAX_EXPLOSION				8





/******************************************************************************************************************
	#1. Chat Popup Wnd
*******************************************************************************************************************/
#define _MAX_CHATLINE_POPUP			19





/******************************************************************************************************************
	#1. Button Wnd
*******************************************************************************************************************/
#define _BTN_STATE_NORMAL			0
#define _BTN_STATE_FOCUS			1
#define _BTN_STATE_CLICK			2

#define _BTN_TYPE_NOFOCUS			0
#define _BTN_TYPE_FOCUS				1





/******************************************************************************************************************
	#1. Game Procedure
*******************************************************************************************************************/
#define _CLIP_WIDTH					800
#define _CLIP_HEIGHT				492
#define _TIMER_ID					1

#define _ET_DIGOUTZOMBI				1  //粱厚啊 顶颇绊 唱柯 如利
#define _ET_MINE					2  //堡籍捞 概厘登绢 乐澜
#define _ET_PILESTONES				3  //倒公歹扁
#define _ET_HOLYCURTAIN				4  //搬拌
#define _ET_FIRE					5
#define _ET_SCULPEICE				6  //林付空狼 倒柄柳 炼阿

#define _MAX_CELL_OBJ				10

// Day Bright.
#define _DAYSTATE_DUSK				0  // 货寒.
#define _DAYSTATE_DAY				1  // 撤.
#define _DAYSTATE_DAWN				2  // 历翅.
#define _DAYSTATE_NIGHT				3  // 广.

// Fog Bright.
#define _FOGSTATE_DAY				0  // 撤.
#define _FOGSTATE_NIGHT				1  // 广.
#define _FOGSTATE_DAWN				2  // 货寒, 历翅.





/******************************************************************************************************************
	#1. Interface
*******************************************************************************************************************/
#define _CHAT_COLOR1				0	//RGB(  0,   0,   0); // 捧苞祸.
#define _CHAT_COLOR2				1	//RGB( 10,  10,  10); // 八沥祸.
#define _CHAT_COLOR3				2	//RGB(255, 255, 255); // 闰祸.
#define _CHAT_COLOR4				3	//RGB(255,   0,   0); // 弧碍.
#define _CHAT_COLOR5				4	//RGB(  0, 255,   0); // 踌祸.
#define _CHAT_COLOR6				5	//RGB(  0,   0, 255); // 仟弗祸
#define _CHAT_COLOR7				6	//RGB(255, 255,   0); // 畴尔祸.
#define _CHAT_COLOR8				7	//RGB(255, 128,   0); // 林炔祸

#define _INPUT_EDITWND_XPOS			223
#define _INPUT_EDITWND_YPOS			549
#define _INPUT_EDITWND_WIDTH		353
#define _INPUT_EDITWND_HEIGHT		15

// 皋牢牢磐其捞胶俊辑 静老 扩档快 酒捞叼.
#define _WND_ID_INVENTORY			0			//啊规扩档快.
#define _WND_ID_STATUS				1			//某腐磐 沥焊 焊扁扩档快(3俺).
#define _WND_ID_STORE				2			//惑痢扩档快.
#define _WND_ID_EXCHANGE			3			//背券扩档快.
#define _WND_ID_GUILD				4			//巩盔扩档快.
#define _WND_ID_GUILDMASTER			5			//巩林扩档快.
#define _WND_ID_GROUP				6			//弊缝扩档快.
#define _WND_ID_GROUPPOP			7			//
#define _WND_ID_CHATPOP				8			//
#define _WND_ID_NPCCHAT				9		
#define _WND_ID_MESSAGEBOX			10			// MessageBox
#define _WND_ID_QUEST				11			// 
#define _WND_ID_OPTION				12			// 
#define _WND_ID_HORSE				13			// 

// 皋牢 牢磐其捞胶俊辑 静老 扩档快狼 捞固瘤 牢郸胶.
#define _WNDIMGIDX_MAIN				50			//皋牢牢磐其捞胶盲泼芒
#define _WNDIMGIDX_INVENTORY	    250			//牢亥配府
#define _WNDIMGIDX_ITEMSET		    200			//
#define _WNDIMGIDX_SKILLSET			202			//公傍汲沥芒
#define _WNDIMGIDX_STATUS			201			//
#define _WNDIMGIDX_CHARINFO			201			//
#define _WNDIMGIDX_STORE			253			//惑痢拱扒荤扁
#define _WNDIMGIDX_EXCHANGE			251			//背券芒
#define _WNDIMGIDX_GUILDMASTER		600			//巩林霸矫魄.
#define _WNDIMGIDX_GUILD			169			//巩盔霸矫魄.
#define _WNDIMGIDX_GROUP			900			//弊缝芒.
#define _WNDIMGIDX_GROUPPOP			145			//弊缝涝仿芒.
#define _WNDIMGIDX_CHATPOP			350			//盲泼扑诀芒.
#define _WNDIMGINDX_MSGBOX1			254
#define _WNDIMGINDX_MSGBOX2			255
#define _WNDIMGIDX_NPCCHAT			300			//NPC措拳芒
#define _WNDIMGIDX_QUEST			700			//涅胶飘芒.
#define _WNDIMGIDX_OPTION			750			//可记芒.
#define _WNDIMGIDX_HORSE			850			//富芒.
#define _IDX_IMG_NOTICEBOX			0			//傍瘤芒 牢郸胶

#define _IMGIDX_BELT				51

// 皋牢牢磐其捞胶俊辑 静老 滚瓢 酒捞叼.
#define _BTN_ID_CHANGE				0
#define _BTN_ID_MINIMAP				1
#define _BTN_ID_MUGONG				2
#define _BTN_ID_EXIT				3
#define _BTN_ID_LOGOUT				4
#define _BTN_ID_GROUP				5
#define _BTN_ID_GUILD				6
#define _BTN_ID_BELT				7
#define _BTN_ID_MAGIC				8
#define _BTN_ID_POPUP				9
#define _BTN_ID_QUEST				10
#define _BTN_ID_OPTION				11
#define _BTN_ID_HELP				12
#define _BTN_ID_HORSE				13
#define _BTN_ID_BAG					14
#define _BTN_ID_CHAR				15

#define _MAX_INTER_BTN				16
#define _MAX_CHATLINE				5

#define _MAX_SAVECHATLINE			50

#define _BELT_STATE_STAY			0
#define _BELT_STATE_UP				1
#define _BELT_STATE_DOWN			2











/******************************************************************************************************************
	#1. Inventory Window
*******************************************************************************************************************/
#define _INVEN_MAX_CELL				25
#define _BELT_MAX_CELL				6
#define _INVEN_CELL_XCNT			5
#define _INVEN_CELL_YCNT			5
#define _INVEN_MAX_CELL_YCNT		12
#define _INVEN_CELL_XSTART			44
#define _INVEN_CELL_YSTART			55

#define _BELT_CELL_XGAP				40
#define _BELT_CELL_XSTART			18
#define _BELT_CELL_YSTART			220

#define _MAX_INVEN_BTN				1//2
#define _MAX_INVEN_ITEM				60
#define _MAX_BELT_ITEM				6

#define _BTN_ID_INVENCLOSE			0
//#define _BTN_ID_INVENSCRLUP		1
//#define _BTN_ID_INVENSCRLDOWN		2





/******************************************************************************************************************
	#1. Light fog
*******************************************************************************************************************/
#define NUM_CNTX_LIGHTTILE			17
#define NUM_CNTY_LIGHTTILE			21
#define TILE_START_XPOS				-8
#define TILE_START_YPOS				-29

#define TILE_WIDTH					48
#define TILE_HEIGHT					32

#define NUM_LIGHTTILE_INDICES		(NUM_CNTX_LIGHTTILE)*(NUM_CNTY_LIGHTTILE)*3*2
#define NUM_LIGHTTILE_VERTICES		(NUM_CNTX_LIGHTTILE+1)*(NUM_CNTY_LIGHTTILE+1)



/******************************************************************************************************************
	#1. Magic
*******************************************************************************************************************/
#define _MAGIC_ACTIVE				0			// 付过劝己惑怕.
#define _LIGHT_ACTIVE				1			// 付过堡盔劝己惑怕.
#define _MAGIC_FINISH				2			// 付过家戈.

#define _SKILL_FIREBALL				1			// 拳堪厘.          // 火球术
#define _SKILL_HEALLING				2			// 雀汗贱.          // 治愈术
#define _SKILL_ONESWORD				3			// 寇荐.            // 基本剑术
#define _SKILL_ILKWANG				4			// 老堡.            // 精神力战法
#define _SKILL_FIREBALL2			5			// 陛碍拳堪厘.      // 大火球
#define _SKILL_AMYOUNSUL			6			// 鞠楷贱.          // 施毒术
#define _SKILL_YEDO					7			// 抗档.            // 攻杀剑术
#define _SKILL_FIREWIND				8			// 拳堪浅.          // 抗拒火环
#define _SKILL_FIRE					9			// 堪荤厘.          // 地狱火
#define _SKILL_SHOOTLIGHTEN			10			// 汾牢厘.          // 激光电影
#define _SKILL_LIGHTENING			11			// 碍拜.            // 雷电术
#define _SKILL_ERGUM				12			// 绢八贱.          // 刺杀剑术
#define _SKILL_FIRECHARM			13			// 气混拌.          // 灵魂火符
#define _SKILL_HANGMAJINBUB			14			// 亲付柳过.        // 幽灵盾
#define _SKILL_DEJIWONHO			15			// 措瘤盔龋.        // 神圣战甲术
#define _SKILL_HOLYSHIELD			16			// 搬拌.            // 困魔咒
#define _SKILL_SKELLETON			17			// 归榜家券贱.      // 召唤骷髅
#define _SKILL_CLOAK				18			// 篮脚.            // 隐身术
#define _SKILL_BIGCLOAK				19			// 措篮脚.          // 集体隐身术
#define _SKILL_TAMMING				20			// 汾去拜.          // 诱惑之光
#define _SKILL_SPACEMOVE			21			// 酒傍青过.        // 瞬息移动
#define _SKILL_EARTHFIRE			22			// 瘤堪贱.          // 火墙
#define _SKILL_FIREBOOM				23			// 气凯颇.          // 爆裂火焰
#define _SKILL_LIGHTFLOWER			24			// 汾汲拳.          // 地狱雷光
#define _SKILL_BANWOL				25			// 馆岿.            // 半月弯刀
#define _SKILL_FIRESWORD			26			// 堪拳搬.          // 烈火剑法
#define _SKILL_MOOTEBO				27			// 公怕焊.          // 野蛮冲撞
#define _SKILL_SHOWHP				28			// 沤扁颇楷.        // 心灵启示
#define _SKILL_BIGHEALLING			29			// 措雀汗.          // 群体治疗术
#define _SKILL_SINSU				30			// 脚荐家券.        // 召唤神兽
#define _SKILL_SHIELD				31			// 林贱狼阜.        // 魔法盾
#define _SKILL_KILLUNDEAD			32			// 荤磊辣雀.        // 圣言术
#define _SKILL_SNOWWIND				33			// 葫汲浅.          // 冰咆哮

#define _SKILL_JUMPSHOT				33			// 痢橇秦辑摹扁 八扁.   // 翔空剑法
#define _SKILL_RANDSWING			34			// 付备 戎滴福扁.       // 莲月剑法
#define _SKILL_SPACEMOVE2			35			// 酒傍青过2.           // 瞬息移动2
#define _SKILL_SPACEMOVE3			36			// 酒傍青过3.           // 瞬息移动3

#define _MONMAGIC_KEPAL				100			// 傈拜傍拜.(傍拜茄 某腐磐困俊)(付过)
#define _MONMAGIC_EXPLODE			101			// 气惯付过.(倒榜方磷阑锭, 沸傍拜矫)
#define _MONMAGIC_BLACK1			102			// 孺付过荤. (付过(矫傈))
#define _MONMAGIC_BLACK2			103			// 孺付过荤. (付过(付过))
#define _MONMAGIC_DIE				104			// 孺付过荤, 版癌渴扁荤, 全付过荤, 脚扁急焊胶函脚傈 磷澜.(瓤苞)
#define _MONMAGIC_ANTHEAL			105			// 摹蜡俺固鳃傅(惯荤付过, 气惯瓤苞.)
#define _MONMAGIC_GREATANT			106			// 芭措俺固.(傍拜茄 某腐磐困俊)(付过)
#define _MONMAGIC_MAGENUMA			108			// 搬拌.
#define _MONMAGIC_ANT				109			// 捍沥俺固傍拜.(傍拜茄 某腐磐困俊)(付过)
#define _MONMAGIC_WORKANT			110			// 老俺固傍拜.(傍拜茄 某腐磐困俊)(付过)
#define _MONMAGIC_RED1				111			// 全付过荤. (付过(矫傈))
#define _MONMAGIC_RED2				112			// 全付过荤. (付过(付过))
#define _MONMAGIC_COWGHOST			113			// 快搁蓖. (付过)
#define _MONMAGIC_SINSU				114			// 脚荐. (付过)
#define _MONMAGIC_ZOMBIE			115			// 粱厚. (付过)
#define _MONMAGIC_JUMAWANG			116			// 林付空. (付过)
#define _MONMAGIC_CHIM				117
#define _MONMAGIC_ARROW				118
#define _MONMAGIC_MAARROW			119
#define _MONMAGIC_DUALAXE			120
#define _MONMAGIC_COWFLAME			121
#define _MONMAGIC_BIGGINE_ATT		122
#define _MONMAGIC_BIGGINE_CHAR		123
#define _MONMAGIC_SANDFISH			124
#define _MONMAGIC_BAODIE			125
#define _MONMAGIC_SINGI_DIE			126
#define _MONMAGIC_HUSU_DIE			127
#define _MONMAGIC_ZOMBIE_DIE		128
#define _MONMAGIC_SSEGI				129
#define _MONMAGIC_NUMAGUMGI			130
#define _MONMAGIC_EXPLODE1			131

#define _BLEND_NORMAL				0			// 老馆利牢弊府扁.(舅颇蔼捞 利侩瞪荐乐促.)
#define _BLEND_LIGHT				1			// 级堡瓤苞屈怕狼 喉坊爹.
#define _BLEND_LIGHTINV				2	
#define _BLEND_INVNORMAL			3
#define _BLEND_INVLIGHT				4
#define _BLEND_INVLIGHTINV			5




/******************************************************************************************************************
	#1. Map Handler
*******************************************************************************************************************/

#define _BASETILE_WIDTH				96				// 扁夯鸥老 承捞.
#define _BASETILE_HEIGHT			64
	
#define _CELL_WIDTH					48				// 扁夯伎 承捞, 扁夯鸥老篮 4俺狼 伎肺 捞风绢瘤绊 沥焊绰 伎窜困肺 历厘等促.
#define _CELL_HEIGHT				32

#define _VIEW_CELL_X_COUNT			24				// 轰康开俊 鞘夸茄 X绵狼 伎窜困 俺荐.((楼捧府 鸥老力寇)谅客困肺 3伎, 快客酒贰肺 2伎究狼 咯蜡甫 敌促.)
#define _VIEW_CELL_Y_COUNT			24			
#define _VIEW_CELL_Y_COUNT_FOR_OBJ	44

#define _VIEW_CELL_X_START			-200			// 轰康开阑 弊府扁 困茄 矫累 伎 X谅钎.
#define _VIEW_CELL_Y_START			-157
#define _MAX_TILE_FILE				14

// 器弊祸 包访 加己.
#define _FOG_COLOR_TYPE0			RGB(0, 0, 0);
#define _FOG_COLOR_TYPE1			RGB(100, 10, 10);
#define _FOG_COLOR_TYPE2			RGB(10, 255, 10);
#define _FOG_COLOR_TYPE3			RGB(10, 10, 255);

// 加己 包访 沥狼.
#define _CAN_WALK					0
#define _CAN_NOTWALK	 			1
#define _CAN_FLY					0
#define _CAN_NOTFLY					1

// 扼捞飘 农扁 包访 沥狼.
#define _LIGHT_SIZE_TYPE0			3
#define _LIGHT_SIZE_TYPE1			4
#define _LIGHT_SIZE_TYPE2			5
#define _LIGHT_SIZE_TYPE3			6

// 扼捞飘 祸 包访 沥狼.
#define _LIGHT_COLOR_TYPE0			RGB(255, 0, 0);
#define _LIGHT_COLOR_TYPE1			RGB(0, 255, 0);
#define _LIGHT_COLOR_TYPE2			RGB(0, 0, 255);
#define _LIGHT_COLOR_TYPE3			RGB(255, 0, 255);

// 巩包访 沥狼.
#define _DOOR_ISCLOSED				0
#define _DOOR_ISOPEN				1

#define _TILE_ANI_DELAY_1			150
#define _TILE_ANI_DELAY_2			200
#define _TILE_ANI_DELAY_3			250
#define _TILE_ANI_DELAY_4			300
#define _TILE_ANI_DELAY_5			350
#define _TILE_ANI_DELAY_6			400
#define _TILE_ANI_DELAY_7			420
#define _TILE_ANI_DELAY_8			450






/******************************************************************************************************************
	#1. Status Window
*******************************************************************************************************************/
#define _TYPE_EQUIP					0
#define _TYPE_STATUS				1
#define _TYPE_SETMAGIC				2

#define _EQUIP_MAX_CELL				10
#define _MAGIC_MAX_CELL				5
#define _MAGIC_MAX_KEY				8

#define _MAX_TYPE_WND				3

#define _MAX_STAUTS_BTN				3

#define _BTN_ID_STATUSCLOSE			0
#define _BTN_ID_STATUS				1
#define _BTN_ID_STATUSMAGIC			2

#define _BTN_ID_STATUS_X			187
#define _BTN_ID_STATUS_Y			266
#define _BTN_ID_STATUSMAGIC_X		224
#define _BTN_ID_STATUSMAGIC_Y		98

#define _EQUIP_CHAR_X				100
#define _EQUIP_CHAR_Y				200

#define _U_DRESS					0 
#define _U_WEAPON					1 
#define _U_RIGHTHAND				2 
#define _U_NECKLACE					3 
#define _U_HELMET					4 
#define _U_ARMRINGL					5 
#define _U_ARMRINGR					6                
#define _U_RINGL					7 
#define _U_RINGR					8 
#define _U_CHARM					9
#define _U_UNEQUIP					100

#define _MAX_MAGIC_SKILL			32




/******************************************************************************************************************
	#1. Store Window
*******************************************************************************************************************/
#define _STORE_STATE_SELL			0
#define _STORE_STATE_BUY			1






/******************************************************************************************************************
	#1. Client To Server Message
*******************************************************************************************************************/
#define CM_QUERYUSERNAME			80
#define CM_QUERYBAGITEMS			81
#define CM_DROPITEM					1000
#define CM_PICKUP					1001
#define CM_TAKEONITEM				1003
#define CM_TAKEOFFITEM				1004
#define CM_EAT						1006
#define CM_MAGICKEYCHANGE			1008
#define CM_LOGINNOTICEOK			1018
#define CM_GROUPMODE				1019	// ***************************************
#define CM_CREATEGROUP				1020	// ***************************************
#define CM_ADDGROUPMEMBER			1021	// ***************************************
#define CM_DELGROUPMEMBER			1022	// ***************************************
#define CM_TRUN						3010
#define CM_WALK						3011
#define CM_RUN						3013
#define CM_HIT						3014
#define CM_LONGHIT					3019
#define CM_POWERHIT					3018
#define CM_SPELL					3017	// 焊辰饶 辑滚俊辑 铰牢捞 坷搁 悼累阑 茄促. 胶歧悼累捞 场抄饶 sm_magicfire啊 坷搁 悼累阑 胶拍靛肺 官槽促.
#define CM_WIDEHIT					3024
#define CM_FIREHIT					3025
#define CM_SAY						3030
#define CM_RIDE						3031

#define CM_BUTCH					1007
#define CM_SITDOWN					3012
#define	CM_CLICKNPC					1010
#define	CM_OPENDOOR					1002


//侩扁
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 傍烹
#define	CM_CLICKNPC					1010	// 捞 皋矫瘤甫 辑滚肺 焊郴绢 秦寸 MPC狼 沥焊甫 罐绰促.
#define	CM_MERCHANTDLGSELECT		1011	// 荤侩磊啊 NPC措拳吝 Tag啊 粮犁窍绰 何盒阑 Click沁阑版快 焊郴绢柳促.
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 迫扁
#define	CM_MERCHANTQUERYSELLPRICE	1012	// 迫扁 拱扒阑 棵妨 初阑 版快 啊拜阑 掘绰促.  
											// 函版且 鞘夸啊 乐澜 (苞芭: 迫拱扒狼 啊拜父 钎矫, 泅犁: 迫府绰 拱扒狼 阿败 葛滴钎矫)
#define CM_USERSELLITEM				1013	// 迫扁 滚瓢阑 喘啡阑 版快 (苞扁: 迫拱扒父 窍唱父 焊晨, 泅犁: 迫拱扒 葛滴 焊晨
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 荤扁
#define CM_USERBUYITEM				1014	// 荤扁 滚瓢阑 喘啡阑 版快
#define CM_USERGETDETAILITEM		1015	// 惑痢 格废吝俊 Sub Menu啊 乐绰 巴阑 努腐沁阑 版快
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 荐府
#define	CM_USERREPAIRITEM			1023	// 荐府窍促 滚瓢阑 喘范阑 版快
#define	CM_MERCHANTQUERYREPAIRCOST	1024	// 荐府且酒捞袍阑 棵妨 初阑 版快 啊拜阑 掘绰促.
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 距规
#define CM_USERMAKEDRUGITEM			1034	// 

////////////////////////////////////////////////////////////////////////////////////////////////////////
// 咯包
#define	CM_USERSTORAGEITEM			1031	// 荤侩磊啊 负变促 滚瓢(咆胶飘 滚瓢 酒丛)阑 喘范阑 版快 焊郴绢柳促.
#define	CM_USERTAKEBACKSTORAGEITEM	1032	// 荤侩磊啊 茫绰促 滚瓢(咆胶飘 滚瓢 酒丛)阑 喘范阑 版快 焊郴绢柳促.
////////////////////////////////////////////////////////////////////////////////////////////////////////
// 巩颇
#define	CM_OPENGUILDDLG				1035	// 荤侩磊啊 巩颇芒阑 凯绊磊 沁阑 版快 焊郴绢柳促.
#define CM_GUILDHOME				1036	// 荤侩磊啊 巩颇芒吝 HOME 滚瓢阑 喘范阑 版快 焊郴绢柳促.
#define	CM_GUILDMEMBERLIST			1037	// 荤侩磊啊 巩颇芒吝 巩盔LIST甫 焊绊磊 寝阑 版快
#define CM_GUILDADDMEMBER			1038	// 荤侩磊啊 巩盔眠啊甫 沁阑 版快
#define	CM_GUILDDELMEMBER			1039	// 荤侩磊啊 巩盔昏力甫 沁阑 版快
#define	CM_GUILDUPDATENOTICE		1040	// 荤侩磊啊 巩颇傍瘤甫 荐沥 沁阑 版快
#define	CM_GUILDUPDATERANKINFO		1041	// 荤侩磊啊 巩盔流困甫 荐沥沁阑 版快
#define CM_GUILDMAKEALLY			1044	// 荤侩磊啊 巩颇悼竿阑 沁阑 版快
#define CM_GUILDBREAKALLY			1045	// 荤侩磊啊 巩颇悼竿颇扁甫 沁阑版快



/******************************************************************************************************************
	#1. Server To Client Message
*******************************************************************************************************************/
#define SM_RUSH						6		// 公怕焊 剐扁.
#define SM_FIREHIT					8
#define SM_POWERHIT					18
#define SM_BACKSTEP					9
#define SM_TURN						10
#define SM_WALK						11
#define SM_RUN						13
#define SM_HIT						14
#define SM_SPELL					17		// 胶歧阑 茄促.
#define SM_LONGHIT					19
#define SM_DIGUP					20
#define SM_DIGDOWN					21
#define SM_FLYAXE					22
#define SM_LIGHTING					23
#define SM_WIDEHIT					24
#define SM_DISAPPEAR				30
#define SM_STRUCK					31
#define SM_DEATH					32
#define SM_NOWDEATH					34
#define SM_HEAR						40
#define SM_FEATURECHANGED			41
#define SM_USERNAME					42
#define SM_WINEXP					44		
#define SM_LEVELUP					45
#define SM_DAYCHANGING				46
#define SM_LOGON					50
#define SM_NEWMAP					51
#define SM_ABILITY					52 
#define SM_HEALTHSPELLCHANGED		53
#define SM_MAPDESCRIPTION			54

#define SM_SYSMESSAGE				100
#define SM_GROUPMESSAGE				101
#define SM_CRY						102
#define SM_WHISPER					103
#define SM_GUILDMESSAGE				104

#define SM_ADDITEM					200
#define SM_BAGITEMS					201
#define SM_ADDMAGIC					210
#define SM_SENDMYMAGIC				211

#define SM_DROPITEM_SCCESS			600
#define SM_DROPITEM_FAIL			601
#define SM_ITEMSHOW					610
#define SM_ITEMHIDE 				611
#define SM_TAKEON_OK				615
#define SM_TAKEON_FAIL				616
#define SM_DOOROPEN					612
#define SM_TAKEOFF_OK				619
#define SM_TAKEOFF_FAIL				620
#define SM_SENDUSEITEMS				621
#define SM_WEIGHTCHANGED			622
#define SM_CHANGEMAP				634
#define SM_CLEAROBJECT				633
#define SM_EAT_OK					635
#define SM_EAT_FAIL					636
#define SM_MAGICFIRE				638		// 付过捞 角青等促.
#define SM_MAGIC_LVEXP				640
#define SM_DURACHANGE				642
#define SM_GOLDCHANGE				653
#define SM_CHANGELIGHT				654
#define SM_CHANGENAMECOLOR			656
#define SM_CHARSTATUSCHANGE			657
#define SM_SENDNOTICE				658
#define SM_CREATEGROUP_OK			660		// ******************************************************************
#define SM_CREATEGROUP_FAIL			661		// ******************************************************************
#define SM_GROUPCANCEL				666		// ******************************************************************
#define SM_GROUPMEMBERS				667		// ******************************************************************

#define SM_CHANGEGUILDNAME			750
#define SM_SUBABILITY				752

#define SM_SHOWEVENT				804
#define SM_HIDEEVENT				805

#define SM_DELITEM					202
#define SM_DELITEMS					203

#define SM_CLOSEHEALTH				1101
#define SM_OPENHEALTH				1100
#define SM_MONSTERSAY				1501
#define SM_SITDOWN					12
#define SM_BUTCH					637
#define SM_SKELETON					33		// SM_DEATH客 悼老.
#define SM_CHANGEFACE				1104;

#define SM_OPENDOOR_OK				612
#define SM_OPENDOOR_LOCK			613
#define SM_CLOSEDOOR				614

#define SM_MERCHANTSAY				643
#define	SM_MERCHANTDLGCLOSE			644
#define SM_SENDGOODSLIST			645
#define SM_SENDUSERSELL				646
#define	SM_SENDBUYPRICE				647
#define SM_USERSELLITEM_OK			648
#define SM_USERSELLITEM_FAIL		649
#define	SM_BUYITEM_SUCCESS			650
#define SM_BUYITEM_FAIL				651
#define SM_SENDDETAILGOODSLIST		652
#define	SM_GOLDCHANGED				653
#define	SM_OPENGUILDDLG				753
#define	SM_OPENGUILDDLG_FAIL		754
#define	SM_SENDGUILDHOME			755
#define	SM_SENDGUILDMEMBERLIST		756
#define	SM_GUILDADDMEMBER_OK		757
#define	SM_GUILDADDMEMBER_FAIL		758
#define	SM_GUILDDELMEMBER_OK		759
#define	SM_GUILDDELMEMBER_FAIL		760
#define	SM_GUILDRANKUPDATE_FAIL		761
#define	SM_BUILDGUILD_OK			762
#define	SM_BUILDGUILD_FAIL			763
#define	SM_GUILDMAKEALLY_OK			768
#define	SM_GUILDMAKEALLY_FAIL		769
#define	SM_GUILDBREAKALLY_OK		770
#define	SM_GUILDBREAKALLY_FAIL		771
#define	SM_DLGMSG					772


#define	SM_AREASTATE				708

#define	SM_RIDEHORSE				1300

/******************************************************************************************************************
	Resource Dll string index
*******************************************************************************************************************/
#define PUNISHMENT_ID_USING             1
#define PUNISHMENT_ID_THEFT             2
#define PUNISHMENT_DISTURB_GAME         3
#define PUNISHMENT_BBS_CURSES           4
#define PUNISHMENT_CONFIRMED_CURSES     5
#define PUNISHMENT_USAGE_BUG            6
#define PUNISHMENT_ASSUMED_GAMEMASTER   7
#define PUNISHMENT_SPREAD_FALLACY       8
#define NEW_ACCOUNT_HELP_ID             9
#define NEW_ACCOUNT_HELP_PWD            10
#define NEW_ACCOUNT_HELP_REPWD          11
#define NEW_ACCOUNT_HELP_NAME           12
#define NEW_ACCOUNT_HELP_SSNO           13
#define NEW_ACCOUNT_HELP_BIRTH          14
#define NEW_ACCOUNT_HELP_ZIPCODE        15
#define NEW_ACCOUNT_HELP_ADDRESS        16
#define NEW_ACCOUNT_HELP_PHONE          17
#define NEW_ACCOUNT_HELP_MOBILEPHONE    18
#define NEW_ACCOUNT_HELP_EMAIL          19
#define NEW_ACCOUNT_HELP_Q              20
#define NEW_ACCOUNT_HELP_A              21
#define NEW_ACCOUNT_WELL_DONE           22
#define ERROR_STR_LOGIN_1               23
#define ERROR_STR_LOGIN_2               24
#define ERROR_STR_LOGIN_3               25
#define ERROR_STR_LOGIN_4               26
#define ERROR_STR_NEW_ACCOUNT_1         27
#define ERROR_STR_NEW_ACCOUNT_2         28
#define ERROR_STR_NEW_ACCOUNT_3         29
#define ERROR_STR_NEW_ACCOUNT_4         30
#define ERROR_STR_NEW_ACCOUNT_5         31
#define ERROR_STR_NEW_ACCOUNT_6         32
#define ERROR_STR_NEW_ACCOUNT_7         33
#define ALRAM_CHARGE                    34
#define ALRAM_CHARGE_IP                 35
#define ALRAM_CHARGE_1                  36
#define ALRAM_CHARGE_2                  37
#define ALRAM_CHARGE_3                  38
#define CHANGE_PASSWORD                 39
#define CHANGE_PASSWORD_1               40
#define CHANGE_PASSWORD_2               41
#define CHANGE_PASSWORD_3               42
#define CHANGE_PASSWORD_4               43
#define ERROR_STR_SELECT_SERVER_1       44
#define ERROR_STR_SELECT_SERVER_2       45
#define ERROR_STR_NEWCHR_1              200
#define ERROR_STR_NEWCHR_2              201
#define ERROR_STR_NEWCHR_3              202
#define DELETE_CHARACTER_1              203
#define DELETE_CHARACTER_2              204
#define VERSION_NOT_MATCHED             205
#define ERROR_STR_START_GAME_1          206
#define ERROR_STR_DELCHR                207
#define ERROR_STR_PATCH_1               300
#define ERROR_STR_PATCH_2               301
#define ERROR_STR_SERVER_CONNECTION     302
#define NOTICE_NOT_EXIST_INDEX          400
#define NOTICE_LAST_PAGE                401
#define FATAL_ERROR_STR                 9999
#define SERVER_SELECT_TEST              10000
//////////////////////////////////////////////////////////////////////////////////////////////////////



/*******************************************************************************************************
		Login Procedure
*******************************************************************************************************/
#define _LOGIN_SCREEN_WIDTH		640
#define _LOGIN_SCREEN_HEIGHT	480


/******************************************************************************************************************
	#1. Progress States
*******************************************************************************************************************/
#define PRG_CONNECT					 -1
#define PRG_INTRO					 0
#define PRG_LOGIN					 1
#define PRG_NEW_ACCOUNT				 3
#define PRG_PATCH					 4
#define PRG_CHANGE_PASS				 5
#define	PRG_SERVER_SELE				 6
#define PRG_TO_SELECT_CHR			 7
#define	PRG_CHAR_SELE				 8
#define	PRG_CREATE_CHAR				 9
#define PRG_PLAY_GAME				10

#define PRG_SEL_TO_CREA				30
#define PRG_CREA_TO_SEL				31
#define PRG_SEL_TO_GAME				32

#define PRG_PATCH_FILES				77
#define PRG_NEED_ACCOUNT_CHANGE		88
#define PRG_QUIT					99



#endif // _DEFINE_H























