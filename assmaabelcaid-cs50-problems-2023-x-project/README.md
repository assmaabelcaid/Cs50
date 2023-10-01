# Basic Information:

**Project Title**: Party Phil Fanclub.

**Video**: [Party Phil Fanclub](https://youtu.be/id1wnDAKD_Q)

# DESCRIPTION:

Hello! This is my CS50 Final Project.
I have created an HTML site that represents a Party Phil Fanclub, which is a club made by fans to honor Party Phil, the mascotte of the popular game Wii party from the Wii platform (created by NINTENDO).

The project consists of:
- 3 html pages:
	- **in which the first one to click is WELCOME.HTML**. On this site you'll find a video which is the Startup video of the Wii.
	The video will signal you to click "a" to start: you'll need to physically click the keyboard "a" to pass onto the next page.
	- INDEX.HTML is the index and main page of the site. Here you'll find all the content with the links to certain sections and to the Fan blog page.
	- FAN-BLOG.HTML is the second page, which is accessible from INDEX.HTML on the navigation bar. In this page you'll find the fanclub blog.
- 2 css files:
	- style.css is for the INDEX.HTML page
	- style-club.css is for the FAN-BLOG.HTML page
- 2 js files:
	- sound-on-click.js is a function where you'll hear an audio when clicking a certain button
	- popup.js is a function that lets you expand a calendar inside FAN-BLOG.HTML

All the images, videos and sounds are in the "media" folder.



Now I'll analyze in depth each file of this project.

## WELCOME.HTML

The first page is very simple. WELCOME.HTML contains is divided into:
- head with inside:
	- style for the content. I decided to put it directly into html instead of creating a css file as it was short.

- body with inside:
	- 1 section: in this section classed as content you'll find a script which makes you redirect to the INDEX.HTML page by clicking on the keyobard "a".
		inside you'll also find a tag video that is fullscreen where you'll see the startup video.

> [!NOTE]
> in the styles i have hidden the video controls and also the cursor pointer, to force the user to use the keyboard to access the second page.




## INDEX.HTML

The Index page is the most complicated one. It's divided into:
- head with inside:
	- ref to iconscout for the icons;
	- ref to google fonts for the fonts;
	- ref to the _"sound-on-click.js"_ file, which contains the sound on click script;
	- ref to the stylesheet _"style.css"_

- body with inside:
	- nav: the navigation bar which will contain all the links to navigate the pages. The nav bar is divided into 4 _ul_:
		- logo, which will redirect you to WELCOME.HTML when clicked;
		- links, that will redirect you to certain sections of the INDEX page such as:
			- Home --> index.html, so it redirects you to your page by updating it
			- Introduction video --> a section with the same title that has _id="party"_, so in the link the _href="#party"_
			- Wii Party --> a section with the same title that has _id="wii-party"_, so in the link the _href="#wii-party"_
			- Party Phil --> a section with the same title that has _id="party-phil"_, so in the link the _href="#party-phil"_
			- Fan Blog --> the FAN-BLOG.HTML page
		- lateral icons, that will redirect you to certain sections of the INDEX and FAN-CLUB page such as:
			- heart icon with title "Credits" --> FAN-BLOG section that has _id="#credits"_, so in the link the _href="fan-blog.html #credits"_
			- home icon with title "Home" --> _index.html_
			- phone icon with title "contact us" --> a section with the same title in the footer that has _id="contact-us"_, so in the link the _href="#contact-us"_
		- mobile buttons, that will open the menu on the mobile version. They contain two buttons:
			- menu
			- close

	- header: the first section of the page, which contains the title, some images (one with animation) and two buttons:
		- Learn More --> will redirect you to the section Introduction Video
		- Click to hear my line! --> will execute the script on _sound-on-click.js_ file in which you'll hear a line of Party Phil

	- table: with _class="container-video-party"_, that has three columns:
		- 1st one is an image, the shadow of party phil
		- 2nd one is the introduction video of Wii Party. In the video there's an easter egg
		- 3rd one is an image, the shadow of party phil

	- section _id="wii-party"_: which will contain 3 articles with details about Wii Party. Every article consists of an image from the game and a description. The image and text are alternated between rows

	- section _id="party-phil"_: which contains a carousel container with some facts about party phil. The carousel consists of:
		- 3 articles with images and text in which every article has:
			- 1 button to go to the next page
			- 1 button to go the previous page, except for the first article which will redirect you to Wii Party section. the carousel has a sliding bar, but with the aid of the buttons it's possible to switch between articles. The buttons redirect by href and id

	- footer: which contains three columns:
		- 1st one is the Permalink, with the same links as the nav bar but with the addition of "Credits" that will redirect you to the FAN-BLOG section with _id ="credits"_
		- 2nd one is the Contact us, with _id="contact-us"_, which will be the section you'll be redirected to when clicking the phone icon from the nav
		- 3rd one is the Copyright column, with some text regarding copyright



## FAN-BLOG.HTML

It's divided into:
- head with inside:
	- ref to iconscout for the icons;
	- ref to google fonts for the fonts;
	- ref to the _"popup.js"_ file, which contains the popup script;
	- ref to the stylesheet _"style-club.css"_

- body with inside:
	- nav: the navigation bar which will contain all the links to navigate the pages. The nav bar is divided into 4 _ul_:
		- logo, which will redirect you to WELCOME.HTML when clicked;
		- links, that will redirect you to certain sections of the INDEX page such as:
			- Home --> _index.html_, so it redirects you to your page by updating it
			- Introduction video --> a section with the same title that has _id="party"_, so in the link the _href="index.html #party"_
			- Wii Party --> a section with the same title that has _id="wii-party"_, so in the link the _href="index.html #wii-party"_
			- Party Phil --> a section with the same title that has _id="party-phil"_, so in the link the _href="index.html #party-phil"_
			- Fan Blog --> the _FAN-BLOG.HTML_ page, so it redirects you to your page by updating it
		- lateral icons, that will redirect you to certain sections of the INDEX and FAN-CLUB page such as:
			- heart icon with title "Credits" --> the section that has _id="#credits"_, so in the link the _href="#credits"_
			- home icon with title "Home" --> _index.html_
			- phone icon with title "contact us" --> a section with the same title in the footer that has _id="contact-us"_, so in the link the _href="#contact-us"_
		- mobile buttons, that will open the menu on the mobile version. They contain two buttons:
			- menu
			- close

	- header: which contains the title of the Fanclub

	- section with _id="table"_: which will divide the table into two columns:
		- left column: it contains three cards, which are sections that are used as blog posts. In the first one you'll find an unordered list, in the other two you'll find an image and a text
		- right column:
			- it contains a calendar that is embedded with styledcalendar.com and connected to a calendar of one of my accounts that has been created for this purpose. You'll have the possibility to stamp the calendar and subscribe to it, adding the events in your google calendar.
					The calendar also has a "expand the calendar" button that will trigger the _togglePopup()_ function from the _popup.js_ file.
					This function allows you to visualize a section (with a slight animation) appearing as a pop up but with the content of the calendar widget.
					The content in reality it's not the section described above, but it's at the end of the body.
					The content contains the same iframe and script of the calendar but with added divs and classes for formatting.
			- a div called About me where there is a description of the author with a profile picture.
					I have put the _id="credits"_ in this div instead of the one described below only for appereance settings,
					as once clicked the icon that will redirect you i thought that the paged was too scrolled down.
					To center the redirect I decided to put the id in the section above.
			- a div with the credit sections, with text.

	- footer: which contains three columns:
		- 1st one is the Permalink, with the same links as the nav bar but with the addition of "Credits"
				that will redirect you to the FAN-BLOG section with _id ="credits"_
		- 2nd one is the Contact us, with _id="contact-us"_, which will be the section you'll be redirected to when clicking the phone icon from the _nav_
		- 3rd one is the Copyright column, with some text regarding copyright

	- div _class="popup"_, which contains what has been explained in the right column paragraph. This div will not be visible as it will be triggered by the button "expand calendar"



## style.css
In this file I have inserted all the formatting for the _INDEX.HTML_ page.
It starts with some definition of global variables, such as colors and width (both computer and mobile view).

We have the fade class that allows an animation once you are redirected to the INDEX.HTML page. The animation is a _Fadein_ opacity.
The file is divided into:
- general classes
- navigation bar
- header section
- video section
- wii party section
- party phil section
- footer



## style-club.css

In this file I have inserted all the formatting for the _FAN-BLOG.HTML_ page.
It starts with some definition of global variables, such as colors and width (both computer and mobile view).

We have the fade class that allows an animation once you are redirected to the INDEX.HTML page. The animation is a _Fadein_ opacity.
The file is divided into:
- general classes
- navigation bar
- header and table section
- pop up calendar
There is also a responsive layout definition where when the screen is less than 800px wide, make the two columns stack on top of each other instead of next to each other
- footer




## sound-on-click.js
This file contains the function _playclip()_ that allows you to play the audio by clicking the section.
It starts with some ifs about the browser type, so that it can be formatted correctly in all of them.
It's then assign the source of the audio.
Then the object audio is set to an element that is tagged by the _id="audio"_, which we'll find in the index.


## popup.js
A very simple function, that gets the element with _id="popup-1"_ and assignes the _class="active"_. The class is found in the css file.
