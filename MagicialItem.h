#pragma once
class MagicialItem
{
	int magic;
public:	
	int getItemMagic() const;

	explicit MagicialItem(int _magic);
	~MagicialItem();
};

