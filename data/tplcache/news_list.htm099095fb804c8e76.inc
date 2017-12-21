<?php
$z[0]=Array("field","",185,204);
$z[0][4]['name']="title";
$z[1]=Array("global","",205,231);
$z[1][4]['name']="cfg_webname";
$z[2]=Array("field","",272,294);
$z[2][4]['name']="keywords";
$z[3]=Array("field","",334,385);
$z[3][4]['name']="description";
$z[3][4]['function']="html2text(@me)";
$z[4]=Array("include","",606,641);
$z[4][4]['filename']="head.htm";
$z[5]=Array("geturl","    \r\n@me = GetCurUrl();    \r\n",879,953);
$z[5][4]['runphp']="’yes’";
$z[6]=Array("field","",957,986);
$z[6][4]['name']="position";
$z[7]=Array("type","<a href=\"[field:typelink/]\">[field:typename/]</a>",1227,1312);
$z[7][4]['typeid']="133";
$z[8]=Array("arclist","\r\n				    <dd><a href=\"[field:arcurl/]\">[field:title/]</a></dd>",1339,1467);
$z[8][4]['typeid']="133";
$z[8][4]['row']="10";
$z[8][4]['titlelen']="30";
$z[9]=Array("type","<a href=\"[field:typelink/]\">[field:typename/]</a>",1600,1685);
$z[9][4]['typeid']="163";
$z[10]=Array("arclist","\r\n				    <dd><a href=\"[field:arcurl/]\">[field:title/]</a></dd>",1712,1840);
$z[10][4]['typeid']="163";
$z[10][4]['row']="10";
$z[10][4]['titlelen']="30";
$z[11]=Array("include","",1897,1935);
$z[11][4]['filename']="contact.htm";
$z[12]=Array("list","\r\n			<li>\r\n                  \r\n              <!--pic -->\r\n              <div class=\"tab-news-text\">\r\n\r\n                      <h2><a href=\"[field:arcurl/]\" title=\"[field:title/]\">[field:title/]</a></h2>\r\n                <p>分类：[field:typename/] 日期：[field:pubdate function=\"MyDate('Y-m-d',@me)\"/] 浏览次数：<script src=\"/plus/count.php?view=yes&aid=[field:id/]&mid=1\" type='text/javascript' language=\"javascript\"></script>  </p>\r\n                      <p>&nbsp;&nbsp;&nbsp; [field:description/]...</p>\r\n                      <p class=\"c-f47e29 ta_r\"><a href=\"[field:arcurl/]\">查看详情>></a></p>\r\n              </div><!--text -->\r\n                  <div style=\"clear: both;\"></div>\r\n               </li>\r\n                      ",2063,2844);
$z[12][4]['pagesize']="10";
$z[13]=Array("pagelist","",2961,3039);
$z[13][4]['listitem']="info,index,end,pre,next,pageno,option";
$z[13][4]['listsize']="5";
$z[14]=Array("include","",3126,3163);
$z[14][4]['filename']="footer.htm";

?>