//#line 2 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"
// *********************************************************
//
// File autogenerated for the tum_ardrone package
// by the dynamic_reconfigure package.
// Please do not edit.
//
// ********************************************************/

#ifndef __tum_ardrone__AUTOPILOTPARAMSCONFIG_H__
#define __tum_ardrone__AUTOPILOTPARAMSCONFIG_H__

#if __cplusplus >= 201103L
#define DYNAMIC_RECONFIGURE_FINAL final
#else
#define DYNAMIC_RECONFIGURE_FINAL
#endif

#include <dynamic_reconfigure/config_tools.h>
#include <limits>
#include <ros/node_handle.h>
#include <dynamic_reconfigure/ConfigDescription.h>
#include <dynamic_reconfigure/ParamDescription.h>
#include <dynamic_reconfigure/Group.h>
#include <dynamic_reconfigure/config_init_mutex.h>
#include <boost/any.hpp>

namespace tum_ardrone
{
  class AutopilotParamsConfigStatics;

  class AutopilotParamsConfig
  {
  public:
    class AbstractParamDescription : public dynamic_reconfigure::ParamDescription
    {
    public:
      AbstractParamDescription(std::string n, std::string t, uint32_t l,
          std::string d, std::string e)
      {
        name = n;
        type = t;
        level = l;
        description = d;
        edit_method = e;
      }

      virtual void clamp(AutopilotParamsConfig &config, const AutopilotParamsConfig &max, const AutopilotParamsConfig &min) const = 0;
      virtual void calcLevel(uint32_t &level, const AutopilotParamsConfig &config1, const AutopilotParamsConfig &config2) const = 0;
      virtual void fromServer(const ros::NodeHandle &nh, AutopilotParamsConfig &config) const = 0;
      virtual void toServer(const ros::NodeHandle &nh, const AutopilotParamsConfig &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, AutopilotParamsConfig &config) const = 0;
      virtual void toMessage(dynamic_reconfigure::Config &msg, const AutopilotParamsConfig &config) const = 0;
      virtual void getValue(const AutopilotParamsConfig &config, boost::any &val) const = 0;
    };

    typedef boost::shared_ptr<AbstractParamDescription> AbstractParamDescriptionPtr;
    typedef boost::shared_ptr<const AbstractParamDescription> AbstractParamDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template <class T>
    class ParamDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractParamDescription
    {
    public:
      ParamDescription(std::string a_name, std::string a_type, uint32_t a_level,
          std::string a_description, std::string a_edit_method, T AutopilotParamsConfig::* a_f) :
        AbstractParamDescription(a_name, a_type, a_level, a_description, a_edit_method),
        field(a_f)
      {}

      T (AutopilotParamsConfig::* field);

      virtual void clamp(AutopilotParamsConfig &config, const AutopilotParamsConfig &max, const AutopilotParamsConfig &min) const
      {
        if (config.*field > max.*field)
          config.*field = max.*field;

        if (config.*field < min.*field)
          config.*field = min.*field;
      }

      virtual void calcLevel(uint32_t &comb_level, const AutopilotParamsConfig &config1, const AutopilotParamsConfig &config2) const
      {
        if (config1.*field != config2.*field)
          comb_level |= level;
      }

      virtual void fromServer(const ros::NodeHandle &nh, AutopilotParamsConfig &config) const
      {
        nh.getParam(name, config.*field);
      }

      virtual void toServer(const ros::NodeHandle &nh, const AutopilotParamsConfig &config) const
      {
        nh.setParam(name, config.*field);
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, AutopilotParamsConfig &config) const
      {
        return dynamic_reconfigure::ConfigTools::getParameter(msg, name, config.*field);
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const AutopilotParamsConfig &config) const
      {
        dynamic_reconfigure::ConfigTools::appendParameter(msg, name, config.*field);
      }

      virtual void getValue(const AutopilotParamsConfig &config, boost::any &val) const
      {
        val = config.*field;
      }
    };

    class AbstractGroupDescription : public dynamic_reconfigure::Group
    {
      public:
      AbstractGroupDescription(std::string n, std::string t, int p, int i, bool s)
      {
        name = n;
        type = t;
        parent = p;
        state = s;
        id = i;
      }

      std::vector<AbstractParamDescriptionConstPtr> abstract_parameters;
      bool state;

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &config) const = 0;
      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &config) const =0;
      virtual void updateParams(boost::any &cfg, AutopilotParamsConfig &top) const= 0;
      virtual void setInitialState(boost::any &cfg) const = 0;


      void convertParams()
      {
        for(std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = abstract_parameters.begin(); i != abstract_parameters.end(); ++i)
        {
          parameters.push_back(dynamic_reconfigure::ParamDescription(**i));
        }
      }
    };

    typedef boost::shared_ptr<AbstractGroupDescription> AbstractGroupDescriptionPtr;
    typedef boost::shared_ptr<const AbstractGroupDescription> AbstractGroupDescriptionConstPtr;

    // Final keyword added to class because it has virtual methods and inherits
    // from a class with a non-virtual destructor.
    template<class T, class PT>
    class GroupDescription DYNAMIC_RECONFIGURE_FINAL : public AbstractGroupDescription
    {
    public:
      GroupDescription(std::string a_name, std::string a_type, int a_parent, int a_id, bool a_s, T PT::* a_f) : AbstractGroupDescription(a_name, a_type, a_parent, a_id, a_s), field(a_f)
      {
      }

      GroupDescription(const GroupDescription<T, PT>& g): AbstractGroupDescription(g.name, g.type, g.parent, g.id, g.state), field(g.field), groups(g.groups)
      {
        parameters = g.parameters;
        abstract_parameters = g.abstract_parameters;
      }

      virtual bool fromMessage(const dynamic_reconfigure::Config &msg, boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        if(!dynamic_reconfigure::ConfigTools::getGroupState(msg, name, (*config).*field))
          return false;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          if(!(*i)->fromMessage(msg, n))
            return false;
        }

        return true;
      }

      virtual void setInitialState(boost::any &cfg) const
      {
        PT* config = boost::any_cast<PT*>(cfg);
        T* group = &((*config).*field);
        group->state = state;

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = boost::any(&((*config).*field));
          (*i)->setInitialState(n);
        }

      }

      virtual void updateParams(boost::any &cfg, AutopilotParamsConfig &top) const
      {
        PT* config = boost::any_cast<PT*>(cfg);

        T* f = &((*config).*field);
        f->setParams(top, abstract_parameters);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          boost::any n = &((*config).*field);
          (*i)->updateParams(n, top);
        }
      }

      virtual void toMessage(dynamic_reconfigure::Config &msg, const boost::any &cfg) const
      {
        const PT config = boost::any_cast<PT>(cfg);
        dynamic_reconfigure::ConfigTools::appendGroup<T>(msg, name, id, parent, config.*field);

        for(std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = groups.begin(); i != groups.end(); ++i)
        {
          (*i)->toMessage(msg, config.*field);
        }
      }

      T (PT::* field);
      std::vector<AutopilotParamsConfig::AbstractGroupDescriptionConstPtr> groups;
    };

class DEFAULT
{
  public:
    DEFAULT()
    {
      state = true;
      name = "Default";
    }

    void setParams(AutopilotParamsConfig &config, const std::vector<AbstractParamDescriptionConstPtr> params)
    {
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator _i = params.begin(); _i != params.end(); ++_i)
      {
        boost::any val;
        (*_i)->getValue(config, val);

        if("Ki_yaw"==(*_i)->name){Ki_yaw = boost::any_cast<double>(val);}
        if("Kd_yaw"==(*_i)->name){Kd_yaw = boost::any_cast<double>(val);}
        if("Kp_yaw"==(*_i)->name){Kp_yaw = boost::any_cast<double>(val);}
        if("max_yaw"==(*_i)->name){max_yaw = boost::any_cast<double>(val);}
        if("Ki_gaz"==(*_i)->name){Ki_gaz = boost::any_cast<double>(val);}
        if("Kd_gaz"==(*_i)->name){Kd_gaz = boost::any_cast<double>(val);}
        if("Kp_gaz"==(*_i)->name){Kp_gaz = boost::any_cast<double>(val);}
        if("rise_fac"==(*_i)->name){rise_fac = boost::any_cast<double>(val);}
        if("max_gaz_rise"==(*_i)->name){max_gaz_rise = boost::any_cast<double>(val);}
        if("max_gaz_drop"==(*_i)->name){max_gaz_drop = boost::any_cast<double>(val);}
        if("Ki_rp"==(*_i)->name){Ki_rp = boost::any_cast<double>(val);}
        if("Kd_rp"==(*_i)->name){Kd_rp = boost::any_cast<double>(val);}
        if("Kp_rp"==(*_i)->name){Kp_rp = boost::any_cast<double>(val);}
        if("max_rp"==(*_i)->name){max_rp = boost::any_cast<double>(val);}
        if("agressiveness"==(*_i)->name){agressiveness = boost::any_cast<double>(val);}
      }
    }

    double Ki_yaw;
double Kd_yaw;
double Kp_yaw;
double max_yaw;
double Ki_gaz;
double Kd_gaz;
double Kp_gaz;
double rise_fac;
double max_gaz_rise;
double max_gaz_drop;
double Ki_rp;
double Kd_rp;
double Kp_rp;
double max_rp;
double agressiveness;

    bool state;
    std::string name;

    
}groups;



//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Ki_yaw;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kd_yaw;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kp_yaw;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double max_yaw;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Ki_gaz;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kd_gaz;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kp_gaz;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double rise_fac;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double max_gaz_rise;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double max_gaz_drop;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Ki_rp;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kd_rp;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double Kp_rp;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double max_rp;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      double agressiveness;
//#line 228 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

    bool __fromMessage__(dynamic_reconfigure::Config &msg)
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();

      int count = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        if ((*i)->fromMessage(msg, *this))
          count++;

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i ++)
      {
        if ((*i)->id == 0)
        {
          boost::any n = boost::any(this);
          (*i)->updateParams(n, *this);
          (*i)->fromMessage(msg, n);
        }
      }

      if (count != dynamic_reconfigure::ConfigTools::size(msg))
      {
        ROS_ERROR("AutopilotParamsConfig::__fromMessage__ called with an unexpected parameter.");
        ROS_ERROR("Booleans:");
        for (unsigned int i = 0; i < msg.bools.size(); i++)
          ROS_ERROR("  %s", msg.bools[i].name.c_str());
        ROS_ERROR("Integers:");
        for (unsigned int i = 0; i < msg.ints.size(); i++)
          ROS_ERROR("  %s", msg.ints[i].name.c_str());
        ROS_ERROR("Doubles:");
        for (unsigned int i = 0; i < msg.doubles.size(); i++)
          ROS_ERROR("  %s", msg.doubles[i].name.c_str());
        ROS_ERROR("Strings:");
        for (unsigned int i = 0; i < msg.strs.size(); i++)
          ROS_ERROR("  %s", msg.strs[i].name.c_str());
        // @todo Check that there are no duplicates. Make this error more
        // explicit.
        return false;
      }
      return true;
    }

    // This version of __toMessage__ is used during initialization of
    // statics when __getParamDescriptions__ can't be called yet.
    void __toMessage__(dynamic_reconfigure::Config &msg, const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__, const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__) const
    {
      dynamic_reconfigure::ConfigTools::clear(msg);
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toMessage(msg, *this);

      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        if((*i)->id == 0)
        {
          (*i)->toMessage(msg, *this);
        }
      }
    }

    void __toMessage__(dynamic_reconfigure::Config &msg) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      __toMessage__(msg, __param_descriptions__, __group_descriptions__);
    }

    void __toServer__(const ros::NodeHandle &nh) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->toServer(nh, *this);
    }

    void __fromServer__(const ros::NodeHandle &nh)
    {
      static bool setup=false;

      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->fromServer(nh, *this);

      const std::vector<AbstractGroupDescriptionConstPtr> &__group_descriptions__ = __getGroupDescriptions__();
      for (std::vector<AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); i++){
        if (!setup && (*i)->id == 0) {
          setup = true;
          boost::any n = boost::any(this);
          (*i)->setInitialState(n);
        }
      }
    }

    void __clamp__()
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      const AutopilotParamsConfig &__max__ = __getMax__();
      const AutopilotParamsConfig &__min__ = __getMin__();
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->clamp(*this, __max__, __min__);
    }

    uint32_t __level__(const AutopilotParamsConfig &config) const
    {
      const std::vector<AbstractParamDescriptionConstPtr> &__param_descriptions__ = __getParamDescriptions__();
      uint32_t level = 0;
      for (std::vector<AbstractParamDescriptionConstPtr>::const_iterator i = __param_descriptions__.begin(); i != __param_descriptions__.end(); ++i)
        (*i)->calcLevel(level, config, *this);
      return level;
    }

    static const dynamic_reconfigure::ConfigDescription &__getDescriptionMessage__();
    static const AutopilotParamsConfig &__getDefault__();
    static const AutopilotParamsConfig &__getMax__();
    static const AutopilotParamsConfig &__getMin__();
    static const std::vector<AbstractParamDescriptionConstPtr> &__getParamDescriptions__();
    static const std::vector<AbstractGroupDescriptionConstPtr> &__getGroupDescriptions__();

  private:
    static const AutopilotParamsConfigStatics *__get_statics__();
  };

  template <> // Max and min are ignored for strings.
  inline void AutopilotParamsConfig::ParamDescription<std::string>::clamp(AutopilotParamsConfig &config, const AutopilotParamsConfig &max, const AutopilotParamsConfig &min) const
  {
    (void) config;
    (void) min;
    (void) max;
    return;
  }

  class AutopilotParamsConfigStatics
  {
    friend class AutopilotParamsConfig;

    AutopilotParamsConfigStatics()
    {
AutopilotParamsConfig::GroupDescription<AutopilotParamsConfig::DEFAULT, AutopilotParamsConfig> Default("Default", "", 0, 0, true, &AutopilotParamsConfig::groups);
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Ki_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Ki_yaw = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Ki_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kd_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kd_yaw = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kd_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kp_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kp_yaw = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kp_yaw = 0.05;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_yaw", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_yaw = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_yaw = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_yaw = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_yaw", "double", 0, "Max. Yaw control sent (ever)", "", &AutopilotParamsConfig::max_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_yaw", "double", 0, "Max. Yaw control sent (ever)", "", &AutopilotParamsConfig::max_yaw)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Ki_gaz = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Ki_gaz = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Ki_gaz = 0.001;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kd_gaz = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kd_gaz = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kd_gaz = 0.1;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kp_gaz = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kp_gaz = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kp_gaz = 0.6;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_gaz", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_gaz)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.rise_fac = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.rise_fac = 5.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.rise_fac = 2.5;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("rise_fac", "double", 0, "positive gaz values are multiplied by this", "", &AutopilotParamsConfig::rise_fac)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("rise_fac", "double", 0, "positive gaz values are multiplied by this", "", &AutopilotParamsConfig::rise_fac)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_gaz_rise = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_gaz_rise = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_gaz_rise = 0.8;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_gaz_rise", "double", 0, "max. (positive) gaz control sent.", "", &AutopilotParamsConfig::max_gaz_rise)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_gaz_rise", "double", 0, "max. (positive) gaz control sent.", "", &AutopilotParamsConfig::max_gaz_rise)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_gaz_drop = -1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_gaz_drop = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_gaz_drop = -0.25;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_gaz_drop", "double", 0, "max. (negative) gaz control sent.", "", &AutopilotParamsConfig::max_gaz_drop)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_gaz_drop", "double", 0, "max. (negative) gaz control sent.", "", &AutopilotParamsConfig::max_gaz_drop)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Ki_rp = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Ki_rp = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Ki_rp = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Ki_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Ki_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kd_rp = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kd_rp = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kd_rp = 0.35;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kd_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kd_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.Kp_rp = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.Kp_rp = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.Kp_rp = 0.5;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("Kp_rp", "double", 0, "PID control parameter", "", &AutopilotParamsConfig::Kp_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.max_rp = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.max_rp = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.max_rp = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_rp", "double", 0, "max roll/pitch control sent.", "", &AutopilotParamsConfig::max_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("max_rp", "double", 0, "max roll/pitch control sent.", "", &AutopilotParamsConfig::max_rp)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __min__.agressiveness = 0.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __max__.agressiveness = 5.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __default__.agressiveness = 1.0;
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.abstract_parameters.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("agressiveness", "double", 0, "global multiplyer to PI control.", "", &AutopilotParamsConfig::agressiveness)));
//#line 290 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __param_descriptions__.push_back(AutopilotParamsConfig::AbstractParamDescriptionConstPtr(new AutopilotParamsConfig::ParamDescription<double>("agressiveness", "double", 0, "global multiplyer to PI control.", "", &AutopilotParamsConfig::agressiveness)));
//#line 245 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      Default.convertParams();
//#line 245 "/opt/ros/kinetic/lib/python2.7/dist-packages/dynamic_reconfigure/parameter_generator_catkin.py"
      __group_descriptions__.push_back(AutopilotParamsConfig::AbstractGroupDescriptionConstPtr(new AutopilotParamsConfig::GroupDescription<AutopilotParamsConfig::DEFAULT, AutopilotParamsConfig>(Default)));
//#line 366 "/opt/ros/kinetic/share/dynamic_reconfigure/cmake/../templates/ConfigType.h.template"

      for (std::vector<AutopilotParamsConfig::AbstractGroupDescriptionConstPtr>::const_iterator i = __group_descriptions__.begin(); i != __group_descriptions__.end(); ++i)
      {
        __description_message__.groups.push_back(**i);
      }
      __max__.__toMessage__(__description_message__.max, __param_descriptions__, __group_descriptions__);
      __min__.__toMessage__(__description_message__.min, __param_descriptions__, __group_descriptions__);
      __default__.__toMessage__(__description_message__.dflt, __param_descriptions__, __group_descriptions__);
    }
    std::vector<AutopilotParamsConfig::AbstractParamDescriptionConstPtr> __param_descriptions__;
    std::vector<AutopilotParamsConfig::AbstractGroupDescriptionConstPtr> __group_descriptions__;
    AutopilotParamsConfig __max__;
    AutopilotParamsConfig __min__;
    AutopilotParamsConfig __default__;
    dynamic_reconfigure::ConfigDescription __description_message__;

    static const AutopilotParamsConfigStatics *get_instance()
    {
      // Split this off in a separate function because I know that
      // instance will get initialized the first time get_instance is
      // called, and I am guaranteeing that get_instance gets called at
      // most once.
      static AutopilotParamsConfigStatics instance;
      return &instance;
    }
  };

  inline const dynamic_reconfigure::ConfigDescription &AutopilotParamsConfig::__getDescriptionMessage__()
  {
    return __get_statics__()->__description_message__;
  }

  inline const AutopilotParamsConfig &AutopilotParamsConfig::__getDefault__()
  {
    return __get_statics__()->__default__;
  }

  inline const AutopilotParamsConfig &AutopilotParamsConfig::__getMax__()
  {
    return __get_statics__()->__max__;
  }

  inline const AutopilotParamsConfig &AutopilotParamsConfig::__getMin__()
  {
    return __get_statics__()->__min__;
  }

  inline const std::vector<AutopilotParamsConfig::AbstractParamDescriptionConstPtr> &AutopilotParamsConfig::__getParamDescriptions__()
  {
    return __get_statics__()->__param_descriptions__;
  }

  inline const std::vector<AutopilotParamsConfig::AbstractGroupDescriptionConstPtr> &AutopilotParamsConfig::__getGroupDescriptions__()
  {
    return __get_statics__()->__group_descriptions__;
  }

  inline const AutopilotParamsConfigStatics *AutopilotParamsConfig::__get_statics__()
  {
    const static AutopilotParamsConfigStatics *statics;

    if (statics) // Common case
      return statics;

    boost::mutex::scoped_lock lock(dynamic_reconfigure::__init_mutex__);

    if (statics) // In case we lost a race.
      return statics;

    statics = AutopilotParamsConfigStatics::get_instance();

    return statics;
  }


}

#undef DYNAMIC_RECONFIGURE_FINAL

#endif // __AUTOPILOTPARAMSRECONFIGURATOR_H__
