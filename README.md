# My Toolkit

我的个人工具箱，记录我认为好用和有趣的工具及资源。

## 版权声明 (Copyright and License)

Copyright (c) 2020-2026 Q.Roy. The project is licensed under the BSD 3-clause License.

See the LICENSE file for the specific language governing permissions and limitations under the License.

## 说明

<!-- ⒶⒷⒸⒹⒺⒻⒼⒽⒾⒿⓀⓁⓂⓃⓄⓅⓆⓇⓈⓉⓊⓋⓌⓍⓎⓏ -->

- `Ⓜ` 表示 **MacOS 平台**；
- `Ⓛ` 表示兼容 **Linux 平台**；
- `Ⓦ ` 表示 **Web 服务**；
- `Ⓐ` 表示 **移动应用**；
- `Ⓡ` 表示 **其他资源**；

<!-- TOC -->autoauto- [My Toolkit](#my-toolkit)auto    - [版权声明 (Copyright and License)](#版权声明-copyright-and-license)auto    - [说明](#说明)auto    - [编辑器/IDE](#编辑器ide)auto    - [CheatSheet](#cheatsheet)auto    - [Shell](#shell)auto            - [功能应用](#功能应用)auto            - [CLI](#cli)auto            - [配色](#配色)auto    - [网络](#网络)auto            - [代理](#代理)auto            - [测速](#测速)auto            - [快速搭建服务](#快速搭建服务)auto            - [抓包工具](#抓包工具)auto    - [科学上网](#科学上网)auto    - [CI/CD](#cicd)auto    - [Git 和版本控制](#git-和版本控制)auto    - [macOS 应用](#macos-应用)autoauto<!-- /TOC -->

## 编辑器/IDE
- [Visual Studio Code](https://code.visualstudio.com/): 主力编辑器，我认为最好的开源编辑器
- [neovim](https://github.com/neovim/neovim): 终端编辑器，更好用的vim `Ⓛ`

## CheatSheet

- [devhints](https://devhints.io/): 网页版 cheatsheet
- [cheat](https://github.com/cheat/cheat): 命令行工具，本地存储，支持多 cheatsheets 扩展。这个仓库只有程序，需要下载官方 cheatsheets 配合使用。还可以 cheat -e 自己编辑维护
  - [cheat/cheatsheet](https://github.com/cheat/cheatsheets): 官方维护的 cheatsheet
- [tldr](https://github.com/tldr-pages/tldr/): 命令行工具，手册内容由社区维护，非常详尽
- [cheat.sh](https://github.com/chubin/cheat.sh): cheatsheet 服务

## Shell
- [bash](http://tiswww.case.edu/php/chet/bash/bashtop.html): 我的默认 shell
- [terminals-are-sexy](https://github.com/k4m4/terminals-are-sexy): 很棒的列表, A curated list of Terminal frameworks, plugins & resources for CLI lovers.
- [bash-completion](https://github.com/scop/bash-completion): bash 命令补全
- [bash-it](https://github.com/Bash-it/bash-it): bash 脚本管理框架
- [dotbot](https://github.com/anishathalye/dotbot): dotfile 管理框架

#### 功能应用

- [trash](https://github.com/sindresorhus/trash): 替代 rm，防止意外
- [massren](https://github.com/laurent22/massren): 批量重命名文件
- [tmux](https://github.com/tmux/tmux): 多终端管理器
  - [the-tao-of-tmux](https://leanpub.com/the-tao-of-tmux/read): 详尽的 tmux 手册
  - [tpm](https://github.com/tmux-plugins/tpm): tmux plugin manager
- [autoenv](https://github.com/inishchith/autoenv): 根据目录下.env 文件自动执行脚本cli
- [imageMagick](https://imagemagick.org/index.php): 超强大的图像处理命令行工具
- [tesseract](https://github.com/tesseract-ocr/tesseract): OCR 工具
  - [tesseract.js](https://github.com/naptha/tesseract.js)
- 

#### CLI

- [fkill-cli](https://github.com/sindresorhus/fkill-cli): 删除进程工具
- [thefuck](https://github.com/nvbn/thefuck): 命令行纠错
- [gotty](https://github.com/yudai/gotty): 将终端程序映射成 Web 服务
- [mosh](https://github.com/mobile-shell/mosh): 自动重连的 ssh
- [cloc](https://github.com/AlDanial/cloc): 代码行数统计
- [taskbook](https://github.com/klaussinani/taskbook): shell 中的 todo list
- [node-qrcode](https://github.com/soldair/node-qrcode): 命令行生成二维码
- [pv](http://www.ivarch.com/programs/pv.shtml): 显示 linux 管道数据传输速度
- [servers][]

#### 配色

- [iTerm2-Color-Schemes](https://github.com/mbadolato/iTerm2-Color-Schemes)
- [LS_COLORS](https://github.com/trapd00r/LS_COLORS): 

## 网络

#### 代理

- [polipo](https://github.com/jech/polipo): http 代理转化为 socks 代理
- [proxychains-ng](https://github.com/rofl0r/proxychains-ng): http 代理服务
- [sshuttle](https://github.com/apenwarr/sshuttle): 基于 ssh 的隧道代理

#### 测速

- [speed-test](https://github.com/sindresorhus/speed-test): speedtest 测速的终端应用

#### 快速搭建服务

<a name="servers"></a>

- [json-server](https://github.com/typicode/json-server): 快速搭建 HTTP RESTFul API Server
- [http-server](https://github.com/http-party/http-server): 快速搭建 HTTP  Server
- [websocketed](https://github.com/joewalnes/websocketd/): 快速搭建 Websocket Server
- [traefik](https://github.com/containous/traefik): 类似 Nginx。现代化 HTTP 反向代理服务器

#### 抓包工具

- [wireshark](https://www.wireshark.org/): 功能非常强大的多协议网络抓包工具
- [mitmproxy](https://mitmproxy.org/): 命令行版抓包工具。4 种模式，3 种命令行 mitmproxy/mitmdump/mitmweb。mitmweb 提供 web 服务端
- [whistle](https://github.com/avwo/whistle)

## 科学上网
- [V2Ray](https://github.com/v2ray/v2ray-core)
  - [V2Ray-X](https://github.com/Cenmrev/V2RayX): macOS 下 V2Ray 客户端
- [gfwlist](https://github.com/gfwlist/gfwlist)

## CI/CD

- [drone](https://github.com/drone/drone)
- [Travis CI]()
- [Circle CI](https://circleci.com/)
- [GoCD](https://link.zhihu.com/?target=https%3A//github.com/gocd/gocd)

## Git 和版本控制

- [git-extras](https://github.com/tj/git-extras): git 命令扩展
- [commitizen](https://github.com/commitizen/cz-cli): git commit 规范工具
- [git-recall](https://github.com/Fakerr/git-recall): 交互式的 git log
- [git-tips](https://github.com/git-tips/tips): git 命令技巧

## 浏览器

#### Chrome

- [chrome-cli](https://github.com/prasmussen/chrome-cli): chrome 终端命令行工具

#### 插件
- [Extensions Manager](https://chrome.google.com/webstore/detail/extensions-manager-aka-sw/lpleipinonnoibneeejgjnoeekmbopbc): Chrome 扩展管理器
- [Tampermonkey](https://github.com/Tampermonkey/tampermonkey): 开源版油猴。开源前端脚本管理器。
- [Proxy SwitchyOmega](https://chrome.google.com/webstore/detail/proxy-switchyomega/padekgcemlokbadohgkifijomclgjgif): Chrome 代理设置管理
- [vimium](https://github.com/philc/vimium): vim 风格操作浏览器
- [Session Buddy](https://chrome.google.com/webstore/detail/session-buddy/edacconmaakjimmfgnblocblbcdcpbko): 暂存标签页
- [Checker Plus for Gmail](https://chrome.google.com/webstore/detail/checker-plus-for-gmail/oeopbcgkkoapgobdbedcemjljbihmemj): Gmail 邮件提醒
- [Wikiwand](https://chrome.google.com/webstore/detail/wikiwand-wikipedia-modern/emffkefkbkpkgpdeeooapgaicgmcbolj): 自动将 Wikipedia 的链接跳转到 Wikiwand
- [AdBlock](http://getadblock.com/): 广告屏蔽插件
- [The Great Suspender](https://github.com/deanoemcke/thegreatsuspender): 拯救你的内存被 Chrome 吃光
- [tamperchrome](https://github.com/google/tamperchrome): 实时拦截并修改请求。不必依赖 Charles 这种代理服务器了
- [Requestly](https://www.requestly.in/content/documentation/): 拦截修改 HTTP 请求，非常灵活好用！
- [Chrono](http://www.chronodownloader.net/): 下载管理器
- [smart-toc](https://chrome.google.com/webstore/detail/smart-toc/lifgeihcfpkmmlfjbailfpfhbahhibba): 根据页面生成 TOC
- [JavaScript Errors Notifier](https://chrome.google.com/webstore/detail/javascript-errors-notifie/jafmfknfnkoekkdocjiaipcnmkklaajd): 页面错误检查
- [JSONView](https://chrome.google.com/webstore/detail/jsonview/chklaanhfefbnpoihckbnefhakgolnmc): JSON 文件格式化查看器
- [ShowIp](https://chrome.google.com/webstore/detail/showip/agoljmemkbciolpigpabjfkagboolkcj)
- [EditThisCookie](https://github.com/fcapano/Edit-This-Cookie)
- [hn-special](https://github.com/gabrielecirulli/hn-special): 美化 Hacker News 的界面，交互体验做得非常棒，支持亮/暗色系。

#### 主题
- [Robot](https://chrome.google.com/webstore/detail/robot-theme-inspired-by-a/oeljdmeofcikjblcoehpmdnooimalbmj)
- [High Contrast Colorful](https://chrome.google.com/webstore/detail/high-contrast-colorful/cdfdkmklcjlnnnlnplffpdiekfhkpbme?hl=zh-CN)
- [Just Black](https://chrome.google.com/webstore/detail/just-black/aghfnjkcakhmadgdomlmlhhaocbkloab?hl=zh-CN)

## 制图

- [mermaid](https://github.com/mermaid-js/mermaid): 基于文本生成图的工具
- [planuml](https://github.com/plantuml/plantuml): 代码生成 UML 或流程图
- [draoio](https://github.com/jgraph/drawio): 非常好的前端绘图工具库
- [p5.js](https://p5js.org/): processing JS 相关`Ⓡ`
- [sketch](https://www.sketch.com/): sketch 太贵了
- [iThoughtX](https://www.toketaware.com/): 思维导图工具
- [krita](https://github.com/KDE/krita)
- [pixelmator](https://www.pixelmator.com/mac/)

## macOS 应用
以下应用都为 MacOS 应用，不特意标注 `Ⓜ` 标记

- [Alfred](https://www.alfredapp.com/): spotlight 的加强版，mac 下最推荐的应用之一
- [Homebrew](https://brew.sh/): macOS（或 Linux）缺失的软件包的管理器`Ⓛ`
- [Monosnap](https://monosnap.com/): macOS 及多个平台下的截屏软件，包含录屏功能
- [iTerm](https://www.iterm2.com/): macOS 下终端模拟器
- [Paw](https://paw.cloud/): HTTP 客户端 API 工具
- [Keeweb](https://keeweb.info/): 跨平台密码管理工具
- [Dash](https://kapeli.com/dash): 文档浏览器
- [CheatSheet](https://mediaatelier.com/CheatSheet/): 快捷键查看工具
- [Yoink](https://eternalstorms.at/yoink/): macOS 下拖拽的临时文件存放助手
- [Xee3](https://theunarchiver.com/xee): 图片查看工具
- [Moom](https://manytricks.com/moom/): 窗口尺寸管理工具，非常好用
  - [phoenix](https://github.com/fabiospampinato/phoenix): 同类工具
- [Notion](https://www.notion.so/): 我认为的 Evernote 之后最好的笔记工具
- [iThoughtsX](https://www.toketaware.com/ithoughts-osx): 思维导图工具
- [Omni 系列](https://www.omnigroup.com/): omni 系列工具
- [CopyLess 2](https://copyless.net/): 剪切板增强工具
- [Sip](https://sipapp.io/): 取色器工具
  - [colorslurp](https://apps.apple.com/cn/app/colorslurp/id1287239339): 免费的替代品
- [Popclip](https://pilotmoon.com/popclip/): 划词增强工具，体验如在 iOS 系统上一样
- [The Unarchiver](https://theunarchiver.com/): 多文件格式解压工具
- [CleanMyMac](https://macpaw.com/): macOS 清理工具
- [Bartender](https://www.macbartender.com/): macOS menu Bar 拓展工具
- [Gemini](https://gemini.macpaw.com/): 重复文件查找清理工具
- [Docker](https://www.docker.com/products/docker-desktop): macOS 系统下的 docker 应用
- [Kaleidoscope](https://www.kaleidoscopeapp.com/): diff 工具
- [DaisyDisk](https://daisydiskapp.com/): 磁盘查看工具
- [AriaNg](https://github.com/mayswind/AriaNg): aria 客户端
- [Monodraw](https://monodraw.helftone.com/): ASCII 图绘制工具
- [Proxifier](https://www.proxifier.com/): 代理管理工具
- [iStat Menus](https://bjango.com/mac/istatmenus/): 电脑状态监测工具
- [Typora](https://typora.io/): markdown 编辑工具
- [Spark](https://sparkmailapp.com/): 邮件客户端
- [Amphetamine](https://apps.apple.com/cn/app/amphetamine/id937984704?ign-mpt=uo%3D4&mt=12): 防止电脑休眠
- [Charles](https://www.charlesproxy.com/): 抓包工具
- [Navicat Premium](https://www.navicat.com/en/products): 数据库客户端
- [Slack](https://slack.com/)
- [WPS](https://www.wps.com/mac/)
- [Quick Look Plugins](https://github.com/sindresorhus/quick-look-plugins): 快速查看插件
- [pixave](http://www.littlehj.com/mac/): 素材管理工具
- [sloth](https://github.com/sveinbjornt/Sloth): 进程管理
- [awesome screen saver](https://github.com/agarrharr/awesome-macos-screensavers): 屏保
- [Lepton](https://github.com/hackjutsu/Lepton): Github Gist 管理工具
- [keycastr](https://github.com/keycastr/keycastr): 屏幕显示当前按下的快捷建
- [command tab plus](https://noteifyapp.com/command-tab-plus/): Task Switcher 切换应用增强
  - [cmdtap](http://www.yingdev.com/projects/cmdtap)
- [sketch](https://www.sketch.com/): sketch

## Web 工具
- [codelf](https://unbug.github.io/codelf/): 命名查询工具
- [namelix](https://namelix.com/): 商业项目命名工具
- [regexr](https://regexr.com/): 正则表达式测试工具
- [regexper](https://regexper.com/): 正则表达式规则可视化工具
- [repl](https://repl.it/languages): web 端 repl
- [sed](https://sed.js.org/): sed

<!-- anchors -->
[servers]: #user-content-servers