#ifndef CL_DOCKER_EVENTS_H
#define CL_DOCKER_EVENTS_H

#include "cl_command_event.h"

wxDECLARE_EVENT(wxEVT_DOCKER_KILL_CONTAINER, clCommandEvent);
wxDECLARE_EVENT(wxEVT_DOCKER_LIST_CONTAINERS, clCommandEvent);
wxDECLARE_EVENT(wxEVT_DOCKER_LIST_IMAGES, clCommandEvent);
wxDECLARE_EVENT(wxEVT_DOCKER_CLEAR_UNUSED_IMAGES, clCommandEvent);
wxDECLARE_EVENT(wxEVT_DOCKER_ATTACH_TERMINAL, clCommandEvent);
wxDECLARE_EVENT(wxEVT_DOCKER_CONTAINER_CMD, clCommandEvent);

#endif // CL_DOCKER_EVENTS_H