#ifndef _ROS_cob_light_LightModes_h
#define _ROS_cob_light_LightModes_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace cob_light
{

  class LightModes : public ros::Msg
  {
    public:
      enum { NONE =            0            };
      enum { STATIC =          1            };
      enum { FLASH =           2            };
      enum { BREATH =          3            };
      enum { BREATH_COLOR =    4            };
      enum { FADE_COLOR =      5            };
      enum { SEQ =             6            };
      enum { CIRCLE_COLORS =   7            };
      enum { SWEEP =           8            };
      enum { DIST_APPROX =     9            };
      enum { GLOW =           10            };
      enum { XMAS =           11            };
      enum { KIT =            12            };
      enum { TURN_LEFT =      13            };
      enum { TURN_RIGHT =     14            };

    LightModes()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
     return offset;
    }

    virtual const char * getType() override { return "cob_light/LightModes"; };
    virtual const char * getMD5() override { return "4dd8be009b23fd6351c275afb0dd00f8"; };

  };

}
#endif
