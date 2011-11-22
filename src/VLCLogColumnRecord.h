//
//
//      VLCLogColumnRecord.h
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



#ifndef H_VLC_LOG_COLUMN_RECORD
#define H_VLC_LOG_COLUMN_RECORD


#include <gtkmm/treemodel.h>


namespace jRadio
{
    
    
    class VLCLogColumnRecord : public Gtk::TreeModelColumnRecord
    {
        public:
            VLCLogColumnRecord();
            virtual ~VLCLogColumnRecord();
            
            Gtk::TreeModelColumn<Glib::ustring> timeColumn;
            Gtk::TreeModelColumn<Glib::ustring> messageColumn;
    };
    
    
} // namespace jRadio


#endif // H_VLC_LOG_COLUMN_RECORD
