Second version of Factory here if you want to add new document class 
you have to add new if and else like this. Class Diagram is available please copy and paste in planttext.com
https://hastebin.com/awevivowom.cpp

 if(fact == "Text")
    return std::make_unique<TextDocument>();
    if(fact == "Sheet")
    return std::make_unique<SheetDocument>();
    return nullptr;


