<?php
$z[0]=Array("array","-->\n                <!--if(@me['courseid']==\"11\")@me=\"HR.png\";-->\n                <!--else if(@me['courseid']==\"10\")@me=\"D.png\";-->\n                <!--else if(@me['courseid']==\"8\")@me=\"AA.png\";-->\n                <!--",4,262);
$z[0][4]['runphp']="yes";
$z[1]=Array("array","if(@me['courseid']=='11')@me='none';else @me='display';",301,396);
$z[1][4]['runphp']="yes";
$z[2]=Array("courseid","",518,535);
$z[3]=Array("arcurl","",588,603);
$z[4]=Array("coursephoto","",656,676);
$z[5]=Array("name","",731,744);
$z[6]=Array("description","",789,838);
$z[6][4]['function']="cn_substr(@me,50)";
$z[7]=Array("pubdate","",1157,1207);
$z[7][4]['function']="strftime('%Y-%m-%d',@me)";

?>