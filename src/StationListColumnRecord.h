//
//
//      StationListColumnRecord.h
//      
//      Copyright 2011 Johannes Marbach <JohannesMarbach@googlemail.com>
//      
//      This program is free software; you can redistribute it and/or modify
//      it under the terms of the GNU General Public License as published by
//      the Free Software Foundation; either version 2 of the License, or
//      (at your option) any later version.
//      
//      This program is distributed in the hope that it will be useful,
//      but WITHOUT ANY WARRANTY; without even the implied warranty of
//      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//      GNU General Public License for more details.
//      
//      You should have received a copy of the GNU General Public License
//      along with this program; if not, write to the Free Software
//      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//      MA 02110-1301, USA.
//      
//      



#ifndef H_STATION_LIST_COLUMN_RECORD
#define H_STATION_LIST_COLUMN_RECORD


#include <gtkmm/treemodel.h>


namespace jRadio
{
    
    
    class StationListColumnRecord : public Gtk::TreeModelColumnRecord
    {
        public:
            StationListColumnRecord();
            virtual ~StationListColumnRecord();
            
            Gtk::TreeModelColumn<unsigned int> IDColumn;
            Gtk::TreeModelColumn<Glib::ustring> titleColumn;
            Gtk::TreeModelColumn<Glib::ustring> genreColumn;
    };
    
    
} // namespace jRadio


#endif // H_STATION_LIST_COLUMN_RECORD
