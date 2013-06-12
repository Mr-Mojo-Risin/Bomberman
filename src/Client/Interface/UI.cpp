

#include	"UI.hh"

UI::UI(const std::string &texture, bool on_left)
{
  this->_on_left = on_left;
  this->_gui(texture);
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
  this->_data.push_back(Text("0"));
}

void	UI::initialize()
{
  
}
void	UI::update(Event* event)
{
  LogicTree	*tree = dynamic_cast<LogicTree *>(this->getParent()->getWidgetObject(Interface::LOGIC_TREE));
  Daemon::GameObject		*player = tree->getPlayer();
  Daemon::Characteristic	*characts = dynamic_cast<Daemon::Characteristic *>(player->getComponent(Daemon::Characteristic::NAME));
  
  if (characts != 0)
    {
      this->_d0ata[0] = Text(int_to_string(characts->getResi()));
      this->_data[1] = Text(int_to_string(characts->getDamage()));
      this->_data[2] = Text(int_to_string(characts->getStrength()));
      this->_data[3] = Text("0");
      this->_data[4] = Text("0");
      this->_data[5] = Text(int_to_string(characts->getSpeed()));
      this->_data[6] = Text(int_to_string(characts->getASPD()));
      this->_data[7] = Text(int_to_string(characts->getResi()));
      this->_data[8] = Text("0");
      this->_data[9] = Text(int_to_string(characts->getRange()));
    }
}
void	UI::draw()
{
  if (!this->isHidden())
    this->_gui.draw();
}

void	UI::unload() 
{
  
}

