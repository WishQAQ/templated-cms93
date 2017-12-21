function point(id,speed) {
            var sWidth = $(id).width();
            var len = $("" + id + " ul li").length;
            var index = 0;
            var picTimer;
//            var btn = "<div class='btnBg'></div><div class='btn'>";
            var btn = "<div class='btn'>";
            for (var i = 0; i < len; i++) {
                btn += "<span>" + (i + 1) + "</span>";
            }
            btn += "</div>"
            $(id).append(btn);

            //            $("" + id + " .btnBg").css("opacity", 0.5);

            $("" + id + " .btn span").mouseenter(function () {
                index = $("" + id + " .btn span").index(this);
                showPics(index);
            }).eq(0).trigger("mouseenter");

	
				w=(sWidth-30*i-10) / 2;

            $(""+id+" .btn").css("left", w + "px");
            $("" + id + " ul").css("width", sWidth * (len + 1));

            $("" + id + " ul li div").hover(function () {
                //                $(this).siblings().css("opacity", 0.7);
            }, function () {
                //                $("" + id + " ul li div").css("opacity", 1);
            });


            $(id).hover(function () {
                clearInterval(picTimer);
            }, function () {
                picTimer = setInterval(function () {
                    if (index == len) {
                        showFirPic();
                        index = 0;
                    } else {
                        showPics(index);
                    }
                    index++;
                }, speed);
            }).trigger("mouseleave");


            function showPics(index) {
                var nowLeft = -index * sWidth;
                $("" + id + " ul").stop(true, false).animate({ "left": nowLeft }, 500);
                $("" + id + " .btn span").removeClass("on").eq(index).addClass("on");
            }

            function showFirPic() {
                $("" + id + " ul").append($("" + id + " ul li:first").clone());
                var nowLeft = -len * sWidth;
                $("" + id + " ul").stop(true, false).animate({ "left": nowLeft }, 500, function () {
                    $("" + id + " ul").css("left", "0");
                    $("" + id + " ul li:last").remove();
                });
                $("" + id + " .btn span").removeClass("on").eq(0).addClass("on");
            }
        }       