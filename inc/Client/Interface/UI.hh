
#ifndef	__UI_H__
# define	__UI_H__

#include	<vector>

class	UI: public IWidgetObject
{
  Image			_gui;
  std::vector<Text *>	_data;
  bool			_on_left;
public:
  UI(const std::string &texture, bool on_left);
  ~UI();

  virtual void	initialize();
  virtual void	update(Event* event);
  virtual void	draw();
  virtual void	unload();

};

#endif
