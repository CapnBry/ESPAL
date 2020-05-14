#ifndef _ESPAL_H
#error Do not include directly, #include "espal.h" 
#endif // !_ESPAL_H

class HalEsp32 : public HalClass
{
  public:
    virtual uint64_t getChipId() {
      return ESP.getEfuseMac();
    }
    virtual uint32_t getFreeHeap() {
      return ESP.getFreeHeap();
    }
    virtual uint32_t getFlashChipSize() {
      return ESP.getFlashChipSize();
    }
    virtual void reset() {
      ESP.restart();
    }
    virtual void eraseConfig() {
    }

};
