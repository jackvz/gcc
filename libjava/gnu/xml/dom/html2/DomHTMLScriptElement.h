
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_xml_dom_html2_DomHTMLScriptElement__
#define __gnu_xml_dom_html2_DomHTMLScriptElement__

#pragma interface

#include <gnu/xml/dom/html2/DomHTMLElement.h>
extern "Java"
{
  namespace gnu
  {
    namespace xml
    {
      namespace dom
      {
        namespace html2
        {
            class DomHTMLDocument;
            class DomHTMLScriptElement;
        }
      }
    }
  }
}

class gnu::xml::dom::html2::DomHTMLScriptElement : public ::gnu::xml::dom::html2::DomHTMLElement
{

public: // actually protected
  DomHTMLScriptElement(::gnu::xml::dom::html2::DomHTMLDocument *, ::java::lang::String *, ::java::lang::String *);
public:
  virtual ::java::lang::String * getText();
  virtual void setText(::java::lang::String *);
  virtual ::java::lang::String * getHtmlFor();
  virtual void setHtmlFor(::java::lang::String *);
  virtual ::java::lang::String * getEvent();
  virtual void setEvent(::java::lang::String *);
  virtual ::java::lang::String * getCharset();
  virtual void setCharset(::java::lang::String *);
  virtual jboolean getDefer();
  virtual void setDefer(jboolean);
  virtual ::java::lang::String * getSrc();
  virtual void setSrc(::java::lang::String *);
  virtual ::java::lang::String * getType();
  virtual void setType(::java::lang::String *);
  static ::java::lang::Class class$;
};

#endif // __gnu_xml_dom_html2_DomHTMLScriptElement__