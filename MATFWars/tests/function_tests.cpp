#include "catch.hpp"
#include "../Function.h"
#include <QList>

TEST_CASE("Testiranje konstruktora funkcije", "[class]") {
    double eps = 0.001;

    SECTION("Konstruktor sa samo jednim parametrom da li su tacke dobro postavljene") {
        Function f("x");
        REQUIRE(f.points().size() == 1000);
        REQUIRE(f.points().first().x() == -15);
        REQUIRE(f.points().last().x() == 15);

        QList expectedPoints = {QPointF(-15,-15), QPointF(-14.97,-14.97), QPointF(-14.9399,-14.9399), QPointF(-14.9099,-14.9099), QPointF(-14.8799,-14.8799), QPointF(-14.8498,-14.8498), QPointF(-14.8198,-14.8198), QPointF(-14.7898,-14.7898), QPointF(-14.7598,-14.7598), QPointF(-14.7297,-14.7297), QPointF(-14.6997,-14.6997), QPointF(-14.6697,-14.6697), QPointF(-14.6396,-14.6396), QPointF(-14.6096,-14.6096), QPointF(-14.5796,-14.5796), QPointF(-14.5495,-14.5495), QPointF(-14.5195,-14.5195), QPointF(-14.4895,-14.4895), QPointF(-14.4595,-14.4595), QPointF(-14.4294,-14.4294), QPointF(-14.3994,-14.3994), QPointF(-14.3694,-14.3694), QPointF(-14.3393,-14.3393), QPointF(-14.3093,-14.3093), QPointF(-14.2793,-14.2793), QPointF(-14.2492,-14.2492), QPointF(-14.2192,-14.2192), QPointF(-14.1892,-14.1892), QPointF(-14.1592,-14.1592), QPointF(-14.1291,-14.1291), QPointF(-14.0991,-14.0991), QPointF(-14.0691,-14.0691), QPointF(-14.039,-14.039), QPointF(-14.009,-14.009), QPointF(-13.979,-13.979), QPointF(-13.9489,-13.9489), QPointF(-13.9189,-13.9189), QPointF(-13.8889,-13.8889), QPointF(-13.8589,-13.8589), QPointF(-13.8288,-13.8288), QPointF(-13.7988,-13.7988), QPointF(-13.7688,-13.7688), QPointF(-13.7387,-13.7387), QPointF(-13.7087,-13.7087), QPointF(-13.6787,-13.6787), QPointF(-13.6486,-13.6486), QPointF(-13.6186,-13.6186), QPointF(-13.5886,-13.5886), QPointF(-13.5586,-13.5586), QPointF(-13.5285,-13.5285), QPointF(-13.4985,-13.4985), QPointF(-13.4685,-13.4685), QPointF(-13.4384,-13.4384), QPointF(-13.4084,-13.4084), QPointF(-13.3784,-13.3784), QPointF(-13.3483,-13.3483), QPointF(-13.3183,-13.3183), QPointF(-13.2883,-13.2883), QPointF(-13.2583,-13.2583), QPointF(-13.2282,-13.2282), QPointF(-13.1982,-13.1982), QPointF(-13.1682,-13.1682), QPointF(-13.1381,-13.1381), QPointF(-13.1081,-13.1081), QPointF(-13.0781,-13.0781), QPointF(-13.048,-13.048), QPointF(-13.018,-13.018), QPointF(-12.988,-12.988), QPointF(-12.958,-12.958), QPointF(-12.9279,-12.9279), QPointF(-12.8979,-12.8979), QPointF(-12.8679,-12.8679), QPointF(-12.8378,-12.8378), QPointF(-12.8078,-12.8078), QPointF(-12.7778,-12.7778), QPointF(-12.7477,-12.7477), QPointF(-12.7177,-12.7177), QPointF(-12.6877,-12.6877), QPointF(-12.6577,-12.6577), QPointF(-12.6276,-12.6276), QPointF(-12.5976,-12.5976), QPointF(-12.5676,-12.5676), QPointF(-12.5375,-12.5375), QPointF(-12.5075,-12.5075), QPointF(-12.4775,-12.4775), QPointF(-12.4474,-12.4474), QPointF(-12.4174,-12.4174), QPointF(-12.3874,-12.3874), QPointF(-12.3574,-12.3574), QPointF(-12.3273,-12.3273), QPointF(-12.2973,-12.2973), QPointF(-12.2673,-12.2673), QPointF(-12.2372,-12.2372), QPointF(-12.2072,-12.2072), QPointF(-12.1772,-12.1772), QPointF(-12.1471,-12.1471), QPointF(-12.1171,-12.1171), QPointF(-12.0871,-12.0871), QPointF(-12.0571,-12.0571), QPointF(-12.027,-12.027), QPointF(-11.997,-11.997), QPointF(-11.967,-11.967), QPointF(-11.9369,-11.9369), QPointF(-11.9069,-11.9069), QPointF(-11.8769,-11.8769), QPointF(-11.8468,-11.8468), QPointF(-11.8168,-11.8168), QPointF(-11.7868,-11.7868), QPointF(-11.7568,-11.7568), QPointF(-11.7267,-11.7267), QPointF(-11.6967,-11.6967), QPointF(-11.6667,-11.6667), QPointF(-11.6366,-11.6366), QPointF(-11.6066,-11.6066), QPointF(-11.5766,-11.5766), QPointF(-11.5465,-11.5465), QPointF(-11.5165,-11.5165), QPointF(-11.4865,-11.4865), QPointF(-11.4565,-11.4565), QPointF(-11.4264,-11.4264), QPointF(-11.3964,-11.3964), QPointF(-11.3664,-11.3664), QPointF(-11.3363,-11.3363), QPointF(-11.3063,-11.3063), QPointF(-11.2763,-11.2763), QPointF(-11.2462,-11.2462), QPointF(-11.2162,-11.2162), QPointF(-11.1862,-11.1862), QPointF(-11.1562,-11.1562), QPointF(-11.1261,-11.1261), QPointF(-11.0961,-11.0961), QPointF(-11.0661,-11.0661), QPointF(-11.036,-11.036), QPointF(-11.006,-11.006), QPointF(-10.976,-10.976), QPointF(-10.9459,-10.9459), QPointF(-10.9159,-10.9159), QPointF(-10.8859,-10.8859), QPointF(-10.8559,-10.8559), QPointF(-10.8258,-10.8258), QPointF(-10.7958,-10.7958), QPointF(-10.7658,-10.7658), QPointF(-10.7357,-10.7357), QPointF(-10.7057,-10.7057), QPointF(-10.6757,-10.6757), QPointF(-10.6456,-10.6456), QPointF(-10.6156,-10.6156), QPointF(-10.5856,-10.5856), QPointF(-10.5556,-10.5556), QPointF(-10.5255,-10.5255), QPointF(-10.4955,-10.4955), QPointF(-10.4655,-10.4655), QPointF(-10.4354,-10.4354), QPointF(-10.4054,-10.4054), QPointF(-10.3754,-10.3754), QPointF(-10.3453,-10.3453), QPointF(-10.3153,-10.3153), QPointF(-10.2853,-10.2853), QPointF(-10.2553,-10.2553), QPointF(-10.2252,-10.2252), QPointF(-10.1952,-10.1952), QPointF(-10.1652,-10.1652), QPointF(-10.1351,-10.1351), QPointF(-10.1051,-10.1051), QPointF(-10.0751,-10.0751), QPointF(-10.045,-10.045), QPointF(-10.015,-10.015), QPointF(-9.98498,-9.98498), QPointF(-9.95495,-9.95495), QPointF(-9.92492,-9.92492), QPointF(-9.89489,-9.89489), QPointF(-9.86486,-9.86486), QPointF(-9.83483,-9.83483), QPointF(-9.8048,-9.8048), QPointF(-9.77477,-9.77477), QPointF(-9.74474,-9.74474), QPointF(-9.71471,-9.71471), QPointF(-9.68468,-9.68468), QPointF(-9.65465,-9.65465), QPointF(-9.62462,-9.62462), QPointF(-9.59459,-9.59459), QPointF(-9.56456,-9.56456), QPointF(-9.53453,-9.53453), QPointF(-9.5045,-9.5045), QPointF(-9.47447,-9.47447), QPointF(-9.44444,-9.44444), QPointF(-9.41441,-9.41441), QPointF(-9.38438,-9.38438), QPointF(-9.35435,-9.35435), QPointF(-9.32432,-9.32432), QPointF(-9.29429,-9.29429), QPointF(-9.26426,-9.26426), QPointF(-9.23423,-9.23423), QPointF(-9.2042,-9.2042), QPointF(-9.17417,-9.17417), QPointF(-9.14414,-9.14414), QPointF(-9.11411,-9.11411), QPointF(-9.08408,-9.08408), QPointF(-9.05405,-9.05405), QPointF(-9.02402,-9.02402), QPointF(-8.99399,-8.99399), QPointF(-8.96396,-8.96396), QPointF(-8.93393,-8.93393), QPointF(-8.9039,-8.9039), QPointF(-8.87387,-8.87387), QPointF(-8.84384,-8.84384), QPointF(-8.81381,-8.81381), QPointF(-8.78378,-8.78378), QPointF(-8.75375,-8.75375), QPointF(-8.72372,-8.72372), QPointF(-8.69369,-8.69369), QPointF(-8.66366,-8.66366), QPointF(-8.63363,-8.63363), QPointF(-8.6036,-8.6036), QPointF(-8.57357,-8.57357), QPointF(-8.54354,-8.54354), QPointF(-8.51351,-8.51351), QPointF(-8.48348,-8.48348), QPointF(-8.45345,-8.45345), QPointF(-8.42342,-8.42342), QPointF(-8.39339,-8.39339), QPointF(-8.36336,-8.36336), QPointF(-8.33333,-8.33333), QPointF(-8.3033,-8.3033), QPointF(-8.27327,-8.27327), QPointF(-8.24324,-8.24324), QPointF(-8.21321,-8.21321), QPointF(-8.18318,-8.18318), QPointF(-8.15315,-8.15315), QPointF(-8.12312,-8.12312), QPointF(-8.09309,-8.09309), QPointF(-8.06306,-8.06306), QPointF(-8.03303,-8.03303), QPointF(-8.003,-8.003), QPointF(-7.97297,-7.97297), QPointF(-7.94294,-7.94294), QPointF(-7.91291,-7.91291), QPointF(-7.88288,-7.88288), QPointF(-7.85285,-7.85285), QPointF(-7.82282,-7.82282), QPointF(-7.79279,-7.79279), QPointF(-7.76276,-7.76276), QPointF(-7.73273,-7.73273), QPointF(-7.7027,-7.7027), QPointF(-7.67267,-7.67267), QPointF(-7.64264,-7.64264), QPointF(-7.61261,-7.61261), QPointF(-7.58258,-7.58258), QPointF(-7.55255,-7.55255), QPointF(-7.52252,-7.52252), QPointF(-7.49249,-7.49249), QPointF(-7.46246,-7.46246), QPointF(-7.43243,-7.43243), QPointF(-7.4024,-7.4024), QPointF(-7.37237,-7.37237), QPointF(-7.34234,-7.34234), QPointF(-7.31231,-7.31231), QPointF(-7.28228,-7.28228), QPointF(-7.25225,-7.25225), QPointF(-7.22222,-7.22222), QPointF(-7.19219,-7.19219), QPointF(-7.16216,-7.16216), QPointF(-7.13213,-7.13213), QPointF(-7.1021,-7.1021), QPointF(-7.07207,-7.07207), QPointF(-7.04204,-7.04204), QPointF(-7.01201,-7.01201), QPointF(-6.98198,-6.98198), QPointF(-6.95195,-6.95195), QPointF(-6.92192,-6.92192), QPointF(-6.89189,-6.89189), QPointF(-6.86186,-6.86186), QPointF(-6.83183,-6.83183), QPointF(-6.8018,-6.8018), QPointF(-6.77177,-6.77177), QPointF(-6.74174,-6.74174), QPointF(-6.71171,-6.71171), QPointF(-6.68168,-6.68168), QPointF(-6.65165,-6.65165), QPointF(-6.62162,-6.62162), QPointF(-6.59159,-6.59159), QPointF(-6.56156,-6.56156), QPointF(-6.53153,-6.53153), QPointF(-6.5015,-6.5015), QPointF(-6.47147,-6.47147), QPointF(-6.44144,-6.44144), QPointF(-6.41141,-6.41141), QPointF(-6.38138,-6.38138), QPointF(-6.35135,-6.35135), QPointF(-6.32132,-6.32132), QPointF(-6.29129,-6.29129), QPointF(-6.26126,-6.26126), QPointF(-6.23123,-6.23123), QPointF(-6.2012,-6.2012), QPointF(-6.17117,-6.17117), QPointF(-6.14114,-6.14114), QPointF(-6.11111,-6.11111), QPointF(-6.08108,-6.08108), QPointF(-6.05105,-6.05105), QPointF(-6.02102,-6.02102), QPointF(-5.99099,-5.99099), QPointF(-5.96096,-5.96096), QPointF(-5.93093,-5.93093), QPointF(-5.9009,-5.9009), QPointF(-5.87087,-5.87087), QPointF(-5.84084,-5.84084), QPointF(-5.81081,-5.81081), QPointF(-5.78078,-5.78078), QPointF(-5.75075,-5.75075), QPointF(-5.72072,-5.72072), QPointF(-5.69069,-5.69069), QPointF(-5.66066,-5.66066), QPointF(-5.63063,-5.63063), QPointF(-5.6006,-5.6006), QPointF(-5.57057,-5.57057), QPointF(-5.54054,-5.54054), QPointF(-5.51051,-5.51051), QPointF(-5.48048,-5.48048), QPointF(-5.45045,-5.45045), QPointF(-5.42042,-5.42042), QPointF(-5.39039,-5.39039), QPointF(-5.36036,-5.36036), QPointF(-5.33033,-5.33033), QPointF(-5.3003,-5.3003), QPointF(-5.27027,-5.27027), QPointF(-5.24024,-5.24024), QPointF(-5.21021,-5.21021), QPointF(-5.18018,-5.18018), QPointF(-5.15015,-5.15015), QPointF(-5.12012,-5.12012), QPointF(-5.09009,-5.09009), QPointF(-5.06006,-5.06006), QPointF(-5.03003,-5.03003), QPointF(-5,-5), QPointF(-4.96997,-4.96997), QPointF(-4.93994,-4.93994), QPointF(-4.90991,-4.90991), QPointF(-4.87988,-4.87988), QPointF(-4.84985,-4.84985), QPointF(-4.81982,-4.81982), QPointF(-4.78979,-4.78979), QPointF(-4.75976,-4.75976), QPointF(-4.72973,-4.72973), QPointF(-4.6997,-4.6997), QPointF(-4.66967,-4.66967), QPointF(-4.63964,-4.63964), QPointF(-4.60961,-4.60961), QPointF(-4.57958,-4.57958), QPointF(-4.54955,-4.54955), QPointF(-4.51952,-4.51952), QPointF(-4.48949,-4.48949), QPointF(-4.45946,-4.45946), QPointF(-4.42943,-4.42943), QPointF(-4.3994,-4.3994), QPointF(-4.36937,-4.36937), QPointF(-4.33934,-4.33934), QPointF(-4.30931,-4.30931), QPointF(-4.27928,-4.27928), QPointF(-4.24925,-4.24925), QPointF(-4.21922,-4.21922), QPointF(-4.18919,-4.18919), QPointF(-4.15916,-4.15916), QPointF(-4.12913,-4.12913), QPointF(-4.0991,-4.0991), QPointF(-4.06907,-4.06907), QPointF(-4.03904,-4.03904), QPointF(-4.00901,-4.00901), QPointF(-3.97898,-3.97898), QPointF(-3.94895,-3.94895), QPointF(-3.91892,-3.91892), QPointF(-3.88889,-3.88889), QPointF(-3.85886,-3.85886), QPointF(-3.82883,-3.82883), QPointF(-3.7988,-3.7988), QPointF(-3.76877,-3.76877), QPointF(-3.73874,-3.73874), QPointF(-3.70871,-3.70871), QPointF(-3.67868,-3.67868), QPointF(-3.64865,-3.64865), QPointF(-3.61862,-3.61862), QPointF(-3.58859,-3.58859), QPointF(-3.55856,-3.55856), QPointF(-3.52853,-3.52853), QPointF(-3.4985,-3.4985), QPointF(-3.46847,-3.46847), QPointF(-3.43844,-3.43844), QPointF(-3.40841,-3.40841), QPointF(-3.37838,-3.37838), QPointF(-3.34835,-3.34835), QPointF(-3.31832,-3.31832), QPointF(-3.28829,-3.28829), QPointF(-3.25826,-3.25826), QPointF(-3.22823,-3.22823), QPointF(-3.1982,-3.1982), QPointF(-3.16817,-3.16817), QPointF(-3.13814,-3.13814), QPointF(-3.10811,-3.10811), QPointF(-3.07808,-3.07808), QPointF(-3.04805,-3.04805), QPointF(-3.01802,-3.01802), QPointF(-2.98799,-2.98799), QPointF(-2.95796,-2.95796), QPointF(-2.92793,-2.92793), QPointF(-2.8979,-2.8979), QPointF(-2.86787,-2.86787), QPointF(-2.83784,-2.83784), QPointF(-2.80781,-2.80781), QPointF(-2.77778,-2.77778), QPointF(-2.74775,-2.74775), QPointF(-2.71772,-2.71772), QPointF(-2.68769,-2.68769), QPointF(-2.65766,-2.65766), QPointF(-2.62763,-2.62763), QPointF(-2.5976,-2.5976), QPointF(-2.56757,-2.56757), QPointF(-2.53754,-2.53754), QPointF(-2.50751,-2.50751), QPointF(-2.47748,-2.47748), QPointF(-2.44745,-2.44745), QPointF(-2.41742,-2.41742), QPointF(-2.38739,-2.38739), QPointF(-2.35736,-2.35736), QPointF(-2.32733,-2.32733), QPointF(-2.2973,-2.2973), QPointF(-2.26727,-2.26727), QPointF(-2.23724,-2.23724), QPointF(-2.20721,-2.20721), QPointF(-2.17718,-2.17718), QPointF(-2.14715,-2.14715), QPointF(-2.11712,-2.11712), QPointF(-2.08709,-2.08709), QPointF(-2.05706,-2.05706), QPointF(-2.02703,-2.02703), QPointF(-1.997,-1.997), QPointF(-1.96697,-1.96697), QPointF(-1.93694,-1.93694), QPointF(-1.90691,-1.90691), QPointF(-1.87688,-1.87688), QPointF(-1.84685,-1.84685), QPointF(-1.81682,-1.81682), QPointF(-1.78679,-1.78679), QPointF(-1.75676,-1.75676), QPointF(-1.72673,-1.72673), QPointF(-1.6967,-1.6967), QPointF(-1.66667,-1.66667), QPointF(-1.63664,-1.63664), QPointF(-1.60661,-1.60661), QPointF(-1.57658,-1.57658), QPointF(-1.54655,-1.54655), QPointF(-1.51652,-1.51652), QPointF(-1.48649,-1.48649), QPointF(-1.45646,-1.45646), QPointF(-1.42643,-1.42643), QPointF(-1.3964,-1.3964), QPointF(-1.36637,-1.36637), QPointF(-1.33634,-1.33634), QPointF(-1.30631,-1.30631), QPointF(-1.27628,-1.27628), QPointF(-1.24625,-1.24625), QPointF(-1.21622,-1.21622), QPointF(-1.18619,-1.18619), QPointF(-1.15616,-1.15616), QPointF(-1.12613,-1.12613), QPointF(-1.0961,-1.0961), QPointF(-1.06607,-1.06607), QPointF(-1.03604,-1.03604), QPointF(-1.00601,-1.00601), QPointF(-0.975976,-0.975976), QPointF(-0.945946,-0.945946), QPointF(-0.915916,-0.915916), QPointF(-0.885886,-0.885886), QPointF(-0.855856,-0.855856), QPointF(-0.825826,-0.825826), QPointF(-0.795796,-0.795796), QPointF(-0.765766,-0.765766), QPointF(-0.735736,-0.735736), QPointF(-0.705706,-0.705706), QPointF(-0.675676,-0.675676), QPointF(-0.645646,-0.645646), QPointF(-0.615616,-0.615616), QPointF(-0.585586,-0.585586), QPointF(-0.555556,-0.555556), QPointF(-0.525526,-0.525526), QPointF(-0.495495,-0.495495), QPointF(-0.465465,-0.465465), QPointF(-0.435435,-0.435435), QPointF(-0.405405,-0.405405), QPointF(-0.375375,-0.375375), QPointF(-0.345345,-0.345345), QPointF(-0.315315,-0.315315), QPointF(-0.285285,-0.285285), QPointF(-0.255255,-0.255255), QPointF(-0.225225,-0.225225), QPointF(-0.195195,-0.195195), QPointF(-0.165165,-0.165165), QPointF(-0.135135,-0.135135), QPointF(-0.105105,-0.105105), QPointF(-0.0750751,-0.0750751), QPointF(-0.045045,-0.045045), QPointF(-0.015015,-0.015015), QPointF(0.015015,0.015015), QPointF(0.045045,0.045045), QPointF(0.0750751,0.0750751), QPointF(0.105105,0.105105), QPointF(0.135135,0.135135), QPointF(0.165165,0.165165), QPointF(0.195195,0.195195), QPointF(0.225225,0.225225), QPointF(0.255255,0.255255), QPointF(0.285285,0.285285), QPointF(0.315315,0.315315), QPointF(0.345345,0.345345), QPointF(0.375375,0.375375), QPointF(0.405405,0.405405), QPointF(0.435435,0.435435), QPointF(0.465465,0.465465), QPointF(0.495495,0.495495), QPointF(0.525526,0.525526), QPointF(0.555556,0.555556), QPointF(0.585586,0.585586), QPointF(0.615616,0.615616), QPointF(0.645646,0.645646), QPointF(0.675676,0.675676), QPointF(0.705706,0.705706), QPointF(0.735736,0.735736), QPointF(0.765766,0.765766), QPointF(0.795796,0.795796), QPointF(0.825826,0.825826), QPointF(0.855856,0.855856), QPointF(0.885886,0.885886), QPointF(0.915916,0.915916), QPointF(0.945946,0.945946), QPointF(0.975976,0.975976), QPointF(1.00601,1.00601), QPointF(1.03604,1.03604), QPointF(1.06607,1.06607), QPointF(1.0961,1.0961), QPointF(1.12613,1.12613), QPointF(1.15616,1.15616), QPointF(1.18619,1.18619), QPointF(1.21622,1.21622), QPointF(1.24625,1.24625), QPointF(1.27628,1.27628), QPointF(1.30631,1.30631), QPointF(1.33634,1.33634), QPointF(1.36637,1.36637), QPointF(1.3964,1.3964), QPointF(1.42643,1.42643), QPointF(1.45646,1.45646), QPointF(1.48649,1.48649), QPointF(1.51652,1.51652), QPointF(1.54655,1.54655), QPointF(1.57658,1.57658), QPointF(1.60661,1.60661), QPointF(1.63664,1.63664), QPointF(1.66667,1.66667), QPointF(1.6967,1.6967), QPointF(1.72673,1.72673), QPointF(1.75676,1.75676), QPointF(1.78679,1.78679), QPointF(1.81682,1.81682), QPointF(1.84685,1.84685), QPointF(1.87688,1.87688), QPointF(1.90691,1.90691), QPointF(1.93694,1.93694), QPointF(1.96697,1.96697), QPointF(1.997,1.997), QPointF(2.02703,2.02703), QPointF(2.05706,2.05706), QPointF(2.08709,2.08709), QPointF(2.11712,2.11712), QPointF(2.14715,2.14715), QPointF(2.17718,2.17718), QPointF(2.20721,2.20721), QPointF(2.23724,2.23724), QPointF(2.26727,2.26727), QPointF(2.2973,2.2973), QPointF(2.32733,2.32733), QPointF(2.35736,2.35736), QPointF(2.38739,2.38739), QPointF(2.41742,2.41742), QPointF(2.44745,2.44745), QPointF(2.47748,2.47748), QPointF(2.50751,2.50751), QPointF(2.53754,2.53754), QPointF(2.56757,2.56757), QPointF(2.5976,2.5976), QPointF(2.62763,2.62763), QPointF(2.65766,2.65766), QPointF(2.68769,2.68769), QPointF(2.71772,2.71772), QPointF(2.74775,2.74775), QPointF(2.77778,2.77778), QPointF(2.80781,2.80781), QPointF(2.83784,2.83784), QPointF(2.86787,2.86787), QPointF(2.8979,2.8979), QPointF(2.92793,2.92793), QPointF(2.95796,2.95796), QPointF(2.98799,2.98799), QPointF(3.01802,3.01802), QPointF(3.04805,3.04805), QPointF(3.07808,3.07808), QPointF(3.10811,3.10811), QPointF(3.13814,3.13814), QPointF(3.16817,3.16817), QPointF(3.1982,3.1982), QPointF(3.22823,3.22823), QPointF(3.25826,3.25826), QPointF(3.28829,3.28829), QPointF(3.31832,3.31832), QPointF(3.34835,3.34835), QPointF(3.37838,3.37838), QPointF(3.40841,3.40841), QPointF(3.43844,3.43844), QPointF(3.46847,3.46847), QPointF(3.4985,3.4985), QPointF(3.52853,3.52853), QPointF(3.55856,3.55856), QPointF(3.58859,3.58859), QPointF(3.61862,3.61862), QPointF(3.64865,3.64865), QPointF(3.67868,3.67868), QPointF(3.70871,3.70871), QPointF(3.73874,3.73874), QPointF(3.76877,3.76877), QPointF(3.7988,3.7988), QPointF(3.82883,3.82883), QPointF(3.85886,3.85886), QPointF(3.88889,3.88889), QPointF(3.91892,3.91892), QPointF(3.94895,3.94895), QPointF(3.97898,3.97898), QPointF(4.00901,4.00901), QPointF(4.03904,4.03904), QPointF(4.06907,4.06907), QPointF(4.0991,4.0991), QPointF(4.12913,4.12913), QPointF(4.15916,4.15916), QPointF(4.18919,4.18919), QPointF(4.21922,4.21922), QPointF(4.24925,4.24925), QPointF(4.27928,4.27928), QPointF(4.30931,4.30931), QPointF(4.33934,4.33934), QPointF(4.36937,4.36937), QPointF(4.3994,4.3994), QPointF(4.42943,4.42943), QPointF(4.45946,4.45946), QPointF(4.48949,4.48949), QPointF(4.51952,4.51952), QPointF(4.54955,4.54955), QPointF(4.57958,4.57958), QPointF(4.60961,4.60961), QPointF(4.63964,4.63964), QPointF(4.66967,4.66967), QPointF(4.6997,4.6997), QPointF(4.72973,4.72973), QPointF(4.75976,4.75976), QPointF(4.78979,4.78979), QPointF(4.81982,4.81982), QPointF(4.84985,4.84985), QPointF(4.87988,4.87988), QPointF(4.90991,4.90991), QPointF(4.93994,4.93994), QPointF(4.96997,4.96997), QPointF(5,5), QPointF(5.03003,5.03003), QPointF(5.06006,5.06006), QPointF(5.09009,5.09009), QPointF(5.12012,5.12012), QPointF(5.15015,5.15015), QPointF(5.18018,5.18018), QPointF(5.21021,5.21021), QPointF(5.24024,5.24024), QPointF(5.27027,5.27027), QPointF(5.3003,5.3003), QPointF(5.33033,5.33033), QPointF(5.36036,5.36036), QPointF(5.39039,5.39039), QPointF(5.42042,5.42042), QPointF(5.45045,5.45045), QPointF(5.48048,5.48048), QPointF(5.51051,5.51051), QPointF(5.54054,5.54054), QPointF(5.57057,5.57057), QPointF(5.6006,5.6006), QPointF(5.63063,5.63063), QPointF(5.66066,5.66066), QPointF(5.69069,5.69069), QPointF(5.72072,5.72072), QPointF(5.75075,5.75075), QPointF(5.78078,5.78078), QPointF(5.81081,5.81081), QPointF(5.84084,5.84084), QPointF(5.87087,5.87087), QPointF(5.9009,5.9009), QPointF(5.93093,5.93093), QPointF(5.96096,5.96096), QPointF(5.99099,5.99099), QPointF(6.02102,6.02102), QPointF(6.05105,6.05105), QPointF(6.08108,6.08108), QPointF(6.11111,6.11111), QPointF(6.14114,6.14114), QPointF(6.17117,6.17117), QPointF(6.2012,6.2012), QPointF(6.23123,6.23123), QPointF(6.26126,6.26126), QPointF(6.29129,6.29129), QPointF(6.32132,6.32132), QPointF(6.35135,6.35135), QPointF(6.38138,6.38138), QPointF(6.41141,6.41141), QPointF(6.44144,6.44144), QPointF(6.47147,6.47147), QPointF(6.5015,6.5015), QPointF(6.53153,6.53153), QPointF(6.56156,6.56156), QPointF(6.59159,6.59159), QPointF(6.62162,6.62162), QPointF(6.65165,6.65165), QPointF(6.68168,6.68168), QPointF(6.71171,6.71171), QPointF(6.74174,6.74174), QPointF(6.77177,6.77177), QPointF(6.8018,6.8018), QPointF(6.83183,6.83183), QPointF(6.86186,6.86186), QPointF(6.89189,6.89189), QPointF(6.92192,6.92192), QPointF(6.95195,6.95195), QPointF(6.98198,6.98198), QPointF(7.01201,7.01201), QPointF(7.04204,7.04204), QPointF(7.07207,7.07207), QPointF(7.1021,7.1021), QPointF(7.13213,7.13213), QPointF(7.16216,7.16216), QPointF(7.19219,7.19219), QPointF(7.22222,7.22222), QPointF(7.25225,7.25225), QPointF(7.28228,7.28228), QPointF(7.31231,7.31231), QPointF(7.34234,7.34234), QPointF(7.37237,7.37237), QPointF(7.4024,7.4024), QPointF(7.43243,7.43243), QPointF(7.46246,7.46246), QPointF(7.49249,7.49249), QPointF(7.52252,7.52252), QPointF(7.55255,7.55255), QPointF(7.58258,7.58258), QPointF(7.61261,7.61261), QPointF(7.64264,7.64264), QPointF(7.67267,7.67267), QPointF(7.7027,7.7027), QPointF(7.73273,7.73273), QPointF(7.76276,7.76276), QPointF(7.79279,7.79279), QPointF(7.82282,7.82282), QPointF(7.85285,7.85285), QPointF(7.88288,7.88288), QPointF(7.91291,7.91291), QPointF(7.94294,7.94294), QPointF(7.97297,7.97297), QPointF(8.003,8.003), QPointF(8.03303,8.03303), QPointF(8.06306,8.06306), QPointF(8.09309,8.09309), QPointF(8.12312,8.12312), QPointF(8.15315,8.15315), QPointF(8.18318,8.18318), QPointF(8.21321,8.21321), QPointF(8.24324,8.24324), QPointF(8.27327,8.27327), QPointF(8.3033,8.3033), QPointF(8.33333,8.33333), QPointF(8.36336,8.36336), QPointF(8.39339,8.39339), QPointF(8.42342,8.42342), QPointF(8.45345,8.45345), QPointF(8.48348,8.48348), QPointF(8.51351,8.51351), QPointF(8.54354,8.54354), QPointF(8.57357,8.57357), QPointF(8.6036,8.6036), QPointF(8.63363,8.63363), QPointF(8.66366,8.66366), QPointF(8.69369,8.69369), QPointF(8.72372,8.72372), QPointF(8.75375,8.75375), QPointF(8.78378,8.78378), QPointF(8.81381,8.81381), QPointF(8.84384,8.84384), QPointF(8.87387,8.87387), QPointF(8.9039,8.9039), QPointF(8.93393,8.93393), QPointF(8.96396,8.96396), QPointF(8.99399,8.99399), QPointF(9.02402,9.02402), QPointF(9.05405,9.05405), QPointF(9.08408,9.08408), QPointF(9.11411,9.11411), QPointF(9.14414,9.14414), QPointF(9.17417,9.17417), QPointF(9.2042,9.2042), QPointF(9.23423,9.23423), QPointF(9.26426,9.26426), QPointF(9.29429,9.29429), QPointF(9.32432,9.32432), QPointF(9.35435,9.35435), QPointF(9.38438,9.38438), QPointF(9.41441,9.41441), QPointF(9.44444,9.44444), QPointF(9.47447,9.47447), QPointF(9.5045,9.5045), QPointF(9.53453,9.53453), QPointF(9.56456,9.56456), QPointF(9.59459,9.59459), QPointF(9.62462,9.62462), QPointF(9.65465,9.65465), QPointF(9.68468,9.68468), QPointF(9.71471,9.71471), QPointF(9.74474,9.74474), QPointF(9.77477,9.77477), QPointF(9.8048,9.8048), QPointF(9.83483,9.83483), QPointF(9.86486,9.86486), QPointF(9.89489,9.89489), QPointF(9.92492,9.92492), QPointF(9.95495,9.95495), QPointF(9.98498,9.98498), QPointF(10.015,10.015), QPointF(10.045,10.045), QPointF(10.0751,10.0751), QPointF(10.1051,10.1051), QPointF(10.1351,10.1351), QPointF(10.1652,10.1652), QPointF(10.1952,10.1952), QPointF(10.2252,10.2252), QPointF(10.2553,10.2553), QPointF(10.2853,10.2853), QPointF(10.3153,10.3153), QPointF(10.3453,10.3453), QPointF(10.3754,10.3754), QPointF(10.4054,10.4054), QPointF(10.4354,10.4354), QPointF(10.4655,10.4655), QPointF(10.4955,10.4955), QPointF(10.5255,10.5255), QPointF(10.5556,10.5556), QPointF(10.5856,10.5856), QPointF(10.6156,10.6156), QPointF(10.6456,10.6456), QPointF(10.6757,10.6757), QPointF(10.7057,10.7057), QPointF(10.7357,10.7357), QPointF(10.7658,10.7658), QPointF(10.7958,10.7958), QPointF(10.8258,10.8258), QPointF(10.8559,10.8559), QPointF(10.8859,10.8859), QPointF(10.9159,10.9159), QPointF(10.9459,10.9459), QPointF(10.976,10.976), QPointF(11.006,11.006), QPointF(11.036,11.036), QPointF(11.0661,11.0661), QPointF(11.0961,11.0961), QPointF(11.1261,11.1261), QPointF(11.1562,11.1562), QPointF(11.1862,11.1862), QPointF(11.2162,11.2162), QPointF(11.2462,11.2462), QPointF(11.2763,11.2763), QPointF(11.3063,11.3063), QPointF(11.3363,11.3363), QPointF(11.3664,11.3664), QPointF(11.3964,11.3964), QPointF(11.4264,11.4264), QPointF(11.4565,11.4565), QPointF(11.4865,11.4865), QPointF(11.5165,11.5165), QPointF(11.5465,11.5465), QPointF(11.5766,11.5766), QPointF(11.6066,11.6066), QPointF(11.6366,11.6366), QPointF(11.6667,11.6667), QPointF(11.6967,11.6967), QPointF(11.7267,11.7267), QPointF(11.7568,11.7568), QPointF(11.7868,11.7868), QPointF(11.8168,11.8168), QPointF(11.8468,11.8468), QPointF(11.8769,11.8769), QPointF(11.9069,11.9069), QPointF(11.9369,11.9369), QPointF(11.967,11.967), QPointF(11.997,11.997), QPointF(12.027,12.027), QPointF(12.0571,12.0571), QPointF(12.0871,12.0871), QPointF(12.1171,12.1171), QPointF(12.1471,12.1471), QPointF(12.1772,12.1772), QPointF(12.2072,12.2072), QPointF(12.2372,12.2372), QPointF(12.2673,12.2673), QPointF(12.2973,12.2973), QPointF(12.3273,12.3273), QPointF(12.3574,12.3574), QPointF(12.3874,12.3874), QPointF(12.4174,12.4174), QPointF(12.4474,12.4474), QPointF(12.4775,12.4775), QPointF(12.5075,12.5075), QPointF(12.5375,12.5375), QPointF(12.5676,12.5676), QPointF(12.5976,12.5976), QPointF(12.6276,12.6276), QPointF(12.6577,12.6577), QPointF(12.6877,12.6877), QPointF(12.7177,12.7177), QPointF(12.7477,12.7477), QPointF(12.7778,12.7778), QPointF(12.8078,12.8078), QPointF(12.8378,12.8378), QPointF(12.8679,12.8679), QPointF(12.8979,12.8979), QPointF(12.9279,12.9279), QPointF(12.958,12.958), QPointF(12.988,12.988), QPointF(13.018,13.018), QPointF(13.048,13.048), QPointF(13.0781,13.0781), QPointF(13.1081,13.1081), QPointF(13.1381,13.1381), QPointF(13.1682,13.1682), QPointF(13.1982,13.1982), QPointF(13.2282,13.2282), QPointF(13.2583,13.2583), QPointF(13.2883,13.2883), QPointF(13.3183,13.3183), QPointF(13.3483,13.3483), QPointF(13.3784,13.3784), QPointF(13.4084,13.4084), QPointF(13.4384,13.4384), QPointF(13.4685,13.4685), QPointF(13.4985,13.4985), QPointF(13.5285,13.5285), QPointF(13.5586,13.5586), QPointF(13.5886,13.5886), QPointF(13.6186,13.6186), QPointF(13.6486,13.6486), QPointF(13.6787,13.6787), QPointF(13.7087,13.7087), QPointF(13.7387,13.7387), QPointF(13.7688,13.7688), QPointF(13.7988,13.7988), QPointF(13.8288,13.8288), QPointF(13.8589,13.8589), QPointF(13.8889,13.8889), QPointF(13.9189,13.9189), QPointF(13.9489,13.9489), QPointF(13.979,13.979), QPointF(14.009,14.009), QPointF(14.039,14.039), QPointF(14.0691,14.0691), QPointF(14.0991,14.0991), QPointF(14.1291,14.1291), QPointF(14.1592,14.1592), QPointF(14.1892,14.1892), QPointF(14.2192,14.2192), QPointF(14.2492,14.2492), QPointF(14.2793,14.2793), QPointF(14.3093,14.3093), QPointF(14.3393,14.3393), QPointF(14.3694,14.3694), QPointF(14.3994,14.3994), QPointF(14.4294,14.4294), QPointF(14.4595,14.4595), QPointF(14.4895,14.4895), QPointF(14.5195,14.5195), QPointF(14.5495,14.5495), QPointF(14.5796,14.5796), QPointF(14.6096,14.6096), QPointF(14.6396,14.6396), QPointF(14.6697,14.6697), QPointF(14.6997,14.6997), QPointF(14.7297,14.7297), QPointF(14.7598,14.7598), QPointF(14.7898,14.7898), QPointF(14.8198,14.8198), QPointF(14.8498,14.8498), QPointF(14.8799,14.8799), QPointF(14.9099,14.9099), QPointF(14.9399,14.9399), QPointF(14.97,14.97), QPointF(15,15)};

        for (int i = 0; i < 1000; i++) {
            REQUIRE(f.points()[i].x() - expectedPoints[i].x() < eps);
            REQUIRE(f.points()[i].y() - expectedPoints[i].y() < eps);
        }
    }

    SECTION("Konstruktor sa svim parametrima proveravamo da li su tacke dobro postavljene") {
        Function f("x", -10, 10, 10);

        REQUIRE(f.points().size() == 10);
        REQUIRE(f.points().first().x() == -10);
        REQUIRE(f.points().last().x() == 10);

        QList expectedPoints ={QPointF(-10,-10), QPointF(-7.77778,-7.77778), QPointF(-5.55556,-5.55556), QPointF(-3.33333,-3.33333), QPointF(-1.11111,-1.11111), QPointF(1.11111,1.11111), QPointF(3.33333,3.33333), QPointF(5.55556,5.55556), QPointF(7.77778,7.77778), QPointF(10,10)};

        for (int i = 0; i < 10; i++) {
            REQUIRE(f.points()[i].x() - expectedPoints[i].x() < eps);
            REQUIRE(f.points()[i].y() - expectedPoints[i].y() < eps);
        }
    }

    SECTION("points() treba da vrati tacke funckije") {

        Function f("sin(x)", -15, 15, 20);
        auto points = f.points();
        REQUIRE_FALSE(points.isEmpty());
        REQUIRE(points.size() == 20);

        QList expectedPoints = {QPointF(-15,-0.650288), QPointF(-13.4211,-0.754362), QPointF(-11.8421,0.662585), QPointF(-10.2632,0.743561), QPointF(-8.68421,-0.674707), QPointF(-7.10526,-0.732562), QPointF(-5.52632,0.686649), QPointF(-3.94737,0.721368), QPointF(-2.36842,-0.698409), QPointF(-0.789474,-0.709983), QPointF(0.789474,0.709983), QPointF(2.36842,0.698409), QPointF(3.94737,-0.721368), QPointF(5.52632,-0.686649), QPointF(7.10526,0.732562), QPointF(8.68421,0.674707), QPointF(10.2632,-0.743561), QPointF(11.8421,-0.662585), QPointF(13.4211,0.754362), QPointF(15,0.650288)};

        for (int i = 0; i < 20; i++) {
            REQUIRE(f.points()[i].x() - expectedPoints[i].x() < eps);
            REQUIRE(f.points()[i].y() - expectedPoints[i].y() < eps);
        }
    }

    SECTION("translatePointsPlayerView tacke funkcije su translirane za (x0, y0) u odnosu na pogled igraca, tj funkcija izlazi iz igraca") {
        Function f("1");

        double fixedY = f.points().at(0).y();
        QList originalPoints = f.points();
        f.translatePointsPlayerView(2, 5);

        for (int i = 0; i < 1000; i++) {
            REQUIRE(f.points()[i].x() - originalPoints[i].x() - 2 < eps);
            REQUIRE(f.points()[i].y() - originalPoints[i].y() - 5 +  fixedY < eps);
        }
    }

    SECTION("translatePointsObserverView tacke funkcije su translirane za (x0, y0) u odnosu na pogled posmatraca") {
        Function f("sin(x)");

        double fixedY = f.points().at(0).y();
        QList originalPoints = f.points();
        f.translatePointsObserverView(2, 5);

        for (int i = 0; i < 1000; i++) {
            REQUIRE(f.points()[i].x() - originalPoints[i].x() - 2 < eps);
            REQUIRE(f.points()[i].y() - originalPoints[i].y() - 5  < eps);
        }
    }

    SECTION("equals() ako su 2 funkcije sa istim \"nazivom\" napravljene nad istim domenom i istim brojem tacka vraca se true") {
        Function f1("x^2", -10, 10, 50);
        Function f2("x^2", -10, 10, 50);

        REQUIRE(f1.equals(&f2));
    }

}


