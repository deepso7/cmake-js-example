#include <iostream>
#include <napi.h>
using namespace std;
namespace example
{
  // add number function
  int add(int x, int y);
  // add function wrapper
  Napi::Number addWrapped(const Napi::CallbackInfo &info);
  // Export API
  Napi::Object Init(Napi::Env env, Napi::Object exports);
  NODE_API_MODULE(addon, Init)
} // namespace example