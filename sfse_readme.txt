Starfield Script Extender v0.2.7 pre-alpha
by Ian Patterson, Stephen Abel, and Expired

The Starfield Script Extender, or SFSE for short, is a modder's resource that expands the scripting capabilities of Starfield. As the editor is not out, it's mostly a plugin loader for now. Depending on where modders show interest, this will expand to Scaleform and Papyrus (or other things) over time.

[ Compatibility ]

SFSE will support the latest version of Starfield available on Steam, currently 1.11.36. The Gamepass/MS Store/EGS version is unsupported. Do not email asking for support.

[ Installation ]

1. Copy the dll and exe files in to your Starfield folder. This is usually C:\Program Files\Steam\SteamApps\common\Starfield\. Do not put it in your Data folder.
2. Ignore the src folder. It is there for programmers only.
3. Make sure Steam is running, then launch the game by running sfse_loader.exe.

[ FAQ ]

* Xbox version?
- No, not possible due to restrictions put in place by the manufacturers.

* My virus scanner complains about sfse_loader!
- It is not a virus. To extend the game, we use a technique called DLL injection to load our code. Since this technique can also be used by viruses, some badly-written virus scanners assume that any program doing it is a virus. Adding an exception to your scanner's rules may be necessary.

* Can I modify and release my own version of SFSE based on the included source code?
- No; the suggested method for extending SFSE is to write a plugin. If this does not meet your needs, please email the contact addresses listed below.

* Can I include SFSE as part of a mod pack/collection or otherwise rehost the files?
- No. Providing a link to https://www.nexusmods.com/starfield/mods/106 is the suggested method of distribution. Exceptions may be given under applicable circumstances; contact us at the email addresses below. This means that if you see this file available for download anywhere other than https://sfse.silverlock.org, https://www.github.com/ianpatt/sfse, or on Nexus by any user other than https://www.nexusmods.com/users/2166624, that service is violating copyright. I don't like having to explicitly spell this out, but my hand has been forced.

* Where did the log files go?
- <My Documents>\My Games\Starfield\SFSE\Logs\

* Where does the SFSE.ini file go?
- Data\SFSE\SFSE.ini. The .ini is generally not needed. See the whatsnew for .ini options.

* How do I uninstall SFSE?
- Delete the .dll and .exe files starting with sfse_ from your Starfield folder.

[ Contact ]

Before contacting, make sure that your game launches properly without SFSE first. If SFSE doesn't appear to be working, follow the steps in the FAQ first, then attach everything from <My Documents>\My Games\Starfield\SFSE\Logs\ to an email.

### MAKE SURE TO INCLUDE YOUR LOG FILES AS ATTACHMENTS ###
I cannot help you solve load order problems.
Do not email when a new version of the game is released.

Ian Patterson (ianpatt)
Send email to ianpatt+sfse [at] gmail [dot] com

[ Standard Disclaimer ]

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
