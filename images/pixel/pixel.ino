#include <Adafruit_DotStar.h>
#include <SPI.h>
#define DATAPIN    4
#define CLOCKPIN   5
Adafruit_DotStar strip(256, DATAPIN, CLOCKPIN, DOTSTAR_BRG);
void setup(){
strip.begin();
strip.setPixelColor(0,202,128,64);
strip.setPixelColor(1,246,233,222);
strip.setPixelColor(2,255,255,255);
strip.setPixelColor(3,255,255,255);
strip.setPixelColor(4,255,255,255);
strip.setPixelColor(5,255,255,255);
strip.setPixelColor(6,255,255,255);
strip.setPixelColor(7,255,255,255);
strip.setPixelColor(8,230,195,165);
strip.setPixelColor(9,211,150,97);
strip.setPixelColor(10,248,239,230);
strip.setPixelColor(11,255,255,255);
strip.setPixelColor(12,255,255,255);
strip.setPixelColor(13,255,255,255);
strip.setPixelColor(14,255,255,255);
strip.setPixelColor(15,255,255,255);
strip.setPixelColor(16,255,255,255);
strip.setPixelColor(17,228,191,159);
strip.setPixelColor(18,200,124,58);
strip.setPixelColor(19,248,237,228);
strip.setPixelColor(20,255,255,255);
strip.setPixelColor(21,255,255,255);
strip.setPixelColor(22,255,255,255);
strip.setPixelColor(23,255,255,255);
strip.setPixelColor(24,255,255,255);
strip.setPixelColor(25,254,253,252);
strip.setPixelColor(26,229,193,162);
strip.setPixelColor(27,211,150,97);
strip.setPixelColor(28,245,232,220);
strip.setPixelColor(29,255,255,255);
strip.setPixelColor(30,255,255,255);
strip.setPixelColor(31,255,255,255);
strip.setPixelColor(32,255,255,255);
strip.setPixelColor(33,255,255,255);
strip.setPixelColor(34,255,255,255);
strip.setPixelColor(35,231,198,170);
strip.setPixelColor(36,201,125,60);
strip.setPixelColor(37,251,244,239);
strip.setPixelColor(38,255,255,255);
strip.setPixelColor(39,255,255,255);
strip.setPixelColor(40,255,255,255);
strip.setPixelColor(41,255,255,255);
strip.setPixelColor(42,255,255,255);
strip.setPixelColor(43,255,255,255);
strip.setPixelColor(44,228,190,157);
strip.setPixelColor(45,206,136,77);
strip.setPixelColor(46,244,228,215);
strip.setPixelColor(47,255,255,255);
strip.setPixelColor(48,255,255,255);
strip.setPixelColor(49,255,255,255);
strip.setPixelColor(50,255,255,255);
strip.setPixelColor(51,255,255,255);
strip.setPixelColor(52,255,255,255);
strip.setPixelColor(53,232,199,171);
strip.setPixelColor(54,209,145,90);
strip.setPixelColor(55,248,239,230);
strip.setPixelColor(56,255,255,255);
strip.setPixelColor(57,255,255,255);
strip.setPixelColor(58,255,255,255);
strip.setPixelColor(59,255,255,255);
strip.setPixelColor(60,255,255,255);
strip.setPixelColor(61,255,255,255);
strip.setPixelColor(62,230,196,166);
strip.setPixelColor(63,196,113,41);
strip.setPixelColor(64,255,255,255);
strip.setPixelColor(65,255,255,255);
strip.setPixelColor(66,255,255,255);
strip.setPixelColor(67,255,255,255);
strip.setPixelColor(68,255,255,255);
strip.setPixelColor(69,255,255,255);
strip.setPixelColor(70,252,249,246);
strip.setPixelColor(71,226,186,152);
strip.setPixelColor(72,255,255,255);
strip.setPixelColor(73,255,255,255);
strip.setPixelColor(74,255,255,255);
strip.setPixelColor(75,255,255,255);
strip.setPixelColor(76,255,255,255);
strip.setPixelColor(77,252,248,245);
strip.setPixelColor(78,211,149,96);
strip.setPixelColor(79,218,167,122);
strip.setPixelColor(80,255,255,255);
strip.setPixelColor(81,255,255,255);
strip.setPixelColor(82,255,255,255);
strip.setPixelColor(83,255,255,255);
strip.setPixelColor(84,249,240,232);
strip.setPixelColor(85,213,153,102);
strip.setPixelColor(86,220,170,127);
strip.setPixelColor(87,252,249,246);
strip.setPixelColor(88,255,255,255);
strip.setPixelColor(89,255,255,255);
strip.setPixelColor(90,255,255,255);
strip.setPixelColor(91,255,255,255);
strip.setPixelColor(92,207,139,81);
strip.setPixelColor(93,224,180,142);
strip.setPixelColor(94,255,255,255);
strip.setPixelColor(95,255,255,255);
strip.setPixelColor(96,255,255,255);
strip.setPixelColor(97,255,255,255);
strip.setPixelColor(98,247,236,227);
strip.setPixelColor(99,206,136,77);
strip.setPixelColor(100,221,173,132);
strip.setPixelColor(101,254,254,253);
strip.setPixelColor(102,255,255,255);
strip.setPixelColor(103,255,255,255);
strip.setPixelColor(104,255,255,255);
strip.setPixelColor(105,250,244,238);
strip.setPixelColor(106,211,148,95);
strip.setPixelColor(107,227,189,155);
strip.setPixelColor(108,255,255,255);
strip.setPixelColor(109,255,255,255);
strip.setPixelColor(110,255,255,255);
strip.setPixelColor(111,255,255,255);
strip.setPixelColor(112,247,236,227);
strip.setPixelColor(113,201,126,61);
strip.setPixelColor(114,226,186,151);
strip.setPixelColor(115,255,255,255);
strip.setPixelColor(116,255,255,255);
strip.setPixelColor(117,255,255,255);
strip.setPixelColor(118,255,255,255);
strip.setPixelColor(119,255,255,255);
strip.setPixelColor(120,208,141,85);
strip.setPixelColor(121,229,192,160);
strip.setPixelColor(122,254,253,252);
strip.setPixelColor(123,255,255,255);
strip.setPixelColor(124,255,255,255);
strip.setPixelColor(125,255,255,255);
strip.setPixelColor(126,255,255,255);
strip.setPixelColor(127,255,255,255);
strip.setPixelColor(128,255,255,255);
strip.setPixelColor(129,255,255,255);
strip.setPixelColor(130,255,255,255);
strip.setPixelColor(131,255,255,255);
strip.setPixelColor(132,255,255,255);
strip.setPixelColor(133,255,255,255);
strip.setPixelColor(134,249,240,233);
strip.setPixelColor(135,195,110,37);
strip.setPixelColor(136,255,255,255);
strip.setPixelColor(137,255,255,255);
strip.setPixelColor(138,255,255,255);
strip.setPixelColor(139,255,255,255);
strip.setPixelColor(140,255,255,255);
strip.setPixelColor(141,242,225,209);
strip.setPixelColor(142,207,140,82);
strip.setPixelColor(143,230,196,166);
strip.setPixelColor(144,255,255,255);
strip.setPixelColor(145,255,255,255);
strip.setPixelColor(146,255,255,255);
strip.setPixelColor(147,255,255,255);
strip.setPixelColor(148,246,232,221);
strip.setPixelColor(149,207,141,83);
strip.setPixelColor(150,234,204,179);
strip.setPixelColor(151,255,255,255);
strip.setPixelColor(152,255,255,255);
strip.setPixelColor(153,255,255,255);
strip.setPixelColor(154,255,255,255);
strip.setPixelColor(155,241,222,206);
strip.setPixelColor(156,197,117,47);
strip.setPixelColor(157,235,206,181);
strip.setPixelColor(158,255,255,255);
strip.setPixelColor(159,255,255,255);
strip.setPixelColor(160,255,255,255);
strip.setPixelColor(161,255,255,255);
strip.setPixelColor(162,242,223,207);
strip.setPixelColor(163,211,149,96);
strip.setPixelColor(164,237,213,191);
strip.setPixelColor(165,255,255,255);
strip.setPixelColor(166,255,255,255);
strip.setPixelColor(167,255,255,255);
strip.setPixelColor(168,255,255,255);
strip.setPixelColor(169,241,221,204);
strip.setPixelColor(170,192,104,28);
strip.setPixelColor(171,239,217,198);
strip.setPixelColor(172,255,255,255);
strip.setPixelColor(173,255,255,255);
strip.setPixelColor(174,255,255,255);
strip.setPixelColor(175,255,255,255);
strip.setPixelColor(176,237,213,191);
strip.setPixelColor(177,209,145,89);
strip.setPixelColor(178,241,221,204);
strip.setPixelColor(179,255,255,255);
strip.setPixelColor(180,255,255,255);
strip.setPixelColor(181,255,255,255);
strip.setPixelColor(182,255,255,255);
strip.setPixelColor(183,255,255,255);
strip.setPixelColor(184,203,132,69);
strip.setPixelColor(185,240,218,200);
strip.setPixelColor(186,255,255,255);
strip.setPixelColor(187,255,255,255);
strip.setPixelColor(188,255,255,255);
strip.setPixelColor(189,255,255,255);
strip.setPixelColor(190,255,255,255);
strip.setPixelColor(191,255,255,255);
strip.setPixelColor(192,203,131,68);
strip.setPixelColor(193,244,229,216);
strip.setPixelColor(194,255,255,255);
strip.setPixelColor(195,255,255,255);
strip.setPixelColor(196,255,255,255);
strip.setPixelColor(197,255,255,255);
strip.setPixelColor(198,255,255,255);
strip.setPixelColor(199,255,255,255);
strip.setPixelColor(200,235,206,181);
strip.setPixelColor(201,196,113,41);
strip.setPixelColor(202,248,237,228);
strip.setPixelColor(203,255,255,255);
strip.setPixelColor(204,255,255,255);
strip.setPixelColor(205,255,255,255);
strip.setPixelColor(206,255,255,255);
strip.setPixelColor(207,255,255,255);
strip.setPixelColor(208,255,255,255);
strip.setPixelColor(209,232,200,172);
strip.setPixelColor(210,208,143,86);
strip.setPixelColor(211,242,224,208);
strip.setPixelColor(212,255,255,255);
strip.setPixelColor(213,255,255,255);
strip.setPixelColor(214,255,255,255);
strip.setPixelColor(215,255,255,255);
strip.setPixelColor(216,255,255,255);
strip.setPixelColor(217,255,255,255);
strip.setPixelColor(218,234,205,180);
strip.setPixelColor(219,206,138,79);
strip.setPixelColor(220,246,234,223);
strip.setPixelColor(221,255,255,255);
strip.setPixelColor(222,255,255,255);
strip.setPixelColor(223,255,255,255);
strip.setPixelColor(224,255,255,255);
strip.setPixelColor(225,255,255,255);
strip.setPixelColor(226,255,255,255);
strip.setPixelColor(227,233,203,177);
strip.setPixelColor(228,199,120,52);
strip.setPixelColor(229,242,224,208);
strip.setPixelColor(230,255,255,255);
strip.setPixelColor(231,255,255,255);
strip.setPixelColor(232,255,255,255);
strip.setPixelColor(233,255,255,255);
strip.setPixelColor(234,255,255,255);
strip.setPixelColor(235,255,255,255);
strip.setPixelColor(236,236,209,186);
strip.setPixelColor(237,211,149,96);
strip.setPixelColor(238,244,228,214);
strip.setPixelColor(239,255,255,255);
strip.setPixelColor(240,255,255,255);
strip.setPixelColor(241,255,255,255);
strip.setPixelColor(242,255,255,255);
strip.setPixelColor(243,255,255,255);
strip.setPixelColor(244,255,255,255);
strip.setPixelColor(245,237,212,190);
strip.setPixelColor(246,192,104,28);
strip.setPixelColor(247,244,228,215);
strip.setPixelColor(248,255,255,255);
strip.setPixelColor(249,255,255,255);
strip.setPixelColor(250,255,255,255);
strip.setPixelColor(251,255,255,255);
strip.setPixelColor(252,255,255,255);
strip.setPixelColor(253,255,255,255);
strip.setPixelColor(254,237,211,190);
strip.setPixelColor(255,220,171,129);
strip.show();
}
void loop() {}