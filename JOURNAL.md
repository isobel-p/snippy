---
title: "Snippy"
github: "https://github.com/isobel-p/snippy"
description: "USB dongle for taking screenshots on multiple monitors."
created_at: "2026-08-26"
---

# August 26: Finished PCB
I did most of the work today! For school and stuff I have to take a lot of screenshots (I have over 2000 screenshots so far...) and so I thought it would be neat to have a physical button to press whenever I needed to take a screenshot. It sounds generic but it's something I'd use every day. And of course the name was inspired by [that one paperclip.](https://en.wikipedia.org/wiki/Office_Assistant)

Initially I only spent an hour on the schematic, but after placing the components, I went back and forth a bit on the design, whether to add LEDs (in the end there wasn't enough space), how big to make the buttons, whether to have a reset button... In the end the whole thing ended up taking 2 hours. 

![Early version that had an LED.](https://user-cdn.hackclub-assets.com/01a0402a-c67b-728b-88c4-1f35c4662dfa/Screenshot_20260826_194214.png)
*An early version that had an LED. I got rid of it later because of space.*

Then the routing. Oh, the routing. It was my first time routing something so small, and I underestimated how much space I needed. I had to move the whole thing around so many times because I didn't leave myself enough space for vias near the bottom but in the end I managed to keep it at a very small form factor. I was determined to keep it at a width of 12mm. While I could have made it wider at the top, I spent ages trying to get this thing to fit within the 12mm. However today I did learn how to make a ground fill! It then took me a slightly embarrassing amount of time to get the silkscreen, including the tiny picture of Caine and the golden name. I think it was worth it in the end. I did also try adding other silkscreen elements but it just ended up looking crowded. The whole thing took 3 hours.

![The current version of my schematic.](https://user-cdn.hackclub-assets.com/01a0402c-a319-7ea3-8ec0-878b441334cb/Screenshot_20260826_2323401.png)
*The current version of my schematic.*

![The PCB.](https://user-cdn.hackclub-assets.com/01a0402f-264f-746c-8d09-8c8aca287104/Screenshot_20260826_232648.png)

**Total time spent today: 5 hours**

# August 27: Finished firmware and CAD!
Today was exhausting. The firmware didn't take too long, I'm more of a software person. One button takes a picture of the current window, one launches the Spectacle app (or other equivalent screenshot app) and one takes a picture of all active screens. That probably took less than an hour.

But this was my first time using Fusion 360. Not counting the insane amount of time it took to even download (which was at least an hour), the whole thing took 5 hours. First it took me ages just to work out how to extrude and stuff. Then because I added rounded corners on the PCB, I tried copying the rounded edges which took SO LONG and made everything so much harder. I scrapped that and went for a rectangular case in the end. At least it works. And then when I finally had it looking like a dongle case, I realised because of the THT buttons, I wouldn't be able to fit the PCB in. So I had to start from scratch. Now the case slides in, and there's a hole at the bottom for the buttons to stick through. While this may not be great for structural integrity it works and everything fits. Although I learned a lot today, I won't be touching Fusion 360 again with a 10 foot pole. 

![Trying and failing to get the rounded edges on my case.](https://cdn.hackclub.com/01a0455a-5642-7fc5-941a-040b0eb789e3/Screenshot%202026-08-27%20190800.png)
*Trying and failing to get the rounded edges on my case.*

**Total time spent today: 6 hours**