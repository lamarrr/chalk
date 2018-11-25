/**
 * @file chalk_demo.cc
 * @author Basit Ayantunde (rlamarrr@gmail.com)
 * @brief
 * @version 0.1
 * @date 2018-11-25
 *
 * @copyright Copyright (c) 2018
 *
 *
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF * * *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
 * EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR * ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH * THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 */
#include <iostream>


#include "chalk.h"

using namespace chalk;

int main() {
  ostyler.formats.push_back(fmt::Bold);
  ostyler.formats.push_back(fmt::Underline);
  // std::cout << FormatWrap(fg::BrightGreen.Wrap("Hello world!"), fmt::Bold);

  std::string bold = fmt::Bold.Wrap("Bold");

  std::string underline = fmt::Underline.Wrap("Underline");
  std::string italic = fmt::Italic.Wrap("Italic");
  std::string conceal = fmt::Conceal.Wrap("Conceal");
  std::string crossed_out = fmt::CrossedOut.Wrap("Crossed Out");
  std::string faint = fmt::Faint.Wrap("Faint");
  std::string rapid_blink = fmt::RapidBlink.Wrap("Rapid Blink");
  std::string slow_blink = fmt::SlowBlink.Wrap("Slow Blink");
  std::string reverse = fmt::Reverse.Wrap("Reverse");

  ostyler << "\n\nFormatting Operations" << std::endl << std::endl;
  std::cout << bold << "   " << underline << "   " << italic << "   " << conceal
            << "   " << crossed_out << "   " << faint << "   " << rapid_blink
            << "   " << slow_blink << "   " << reverse << std::endl;

  ostyler << "\n\n"
          << "3/4 bit Colors"
          << "\n\n";

  std::cout << bg::Red.Wrap("Red") << "    "
            << fg::Black.Wrap(bg::BrightRed.Wrap("Bright Red")) << "    "
            << fg::Red.Wrap("Red") << "    " << fg::BrightRed.Wrap("Bright Red")
            << "\n"
            << std::endl;

  std::cout << bg::Green.Wrap("Green") << "    "
            << fg::Black.Wrap(bg::BrightGreen.Wrap("Bright Green")) << "    "
            << fg::Green.Wrap("Green") << "    "
            << fg::BrightGreen.Wrap("Bright Green") << "\n"
            << std::endl;

  std::cout << bg::Yellow.Wrap("Yellow") << "    "
            << fg::Black.Wrap(bg::BrightYellow.Wrap("Bright Yellow")) << "    "
            << fg::Yellow.Wrap("Yellow") << "    "
            << fg::BrightYellow.Wrap("Bright Yellow") << "\n"
            << std::endl;

  std::cout << bg::Blue.Wrap("Blue") << "    "
            << fg::Black.Wrap(bg::BrightBlue.Wrap("Bright Blue")) << "    "
            << fg::Blue.Wrap("Blue") << "    "
            << fg::BrightBlue.Wrap("Bright Blue") << "\n"
            << std::endl;

  std::cout << bg::Magenta.Wrap("Magenta") << "    "
            << fg::Black.Wrap(bg::BrightMagenta.Wrap("Bright Magenta"))
            << "    " << fg::Magenta.Wrap("Magenta") << "    "
            << fg::BrightMagenta.Wrap("Bright Magenta") << "\n"
            << std::endl;

  std::cout << bg::Cyan.Wrap("Cyan") << "    "
            << fg::Black.Wrap(bg::BrightCyan.Wrap("Bright Cyan")) << "    "
            << fg::Cyan.Wrap("Cyan") << "    "
            << fg::BrightCyan.Wrap("Bright Cyan") << "\n"
            << std::endl;

  std::cout << fg::Black.Wrap(bg::White.Wrap("White")) << "    "
            << fg::Black.Wrap(bg::BrightWhite.Wrap("Bright White")) << "    "
            << fg::White.Wrap("White") << "    "
            << fg::BrightWhite.Wrap("Bright White") << "\n\n\n"
            << std::endl;
}