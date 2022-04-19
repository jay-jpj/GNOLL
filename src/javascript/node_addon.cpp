#include <node.h>
#include "shared_header.h"

using namespace v8;
// using v8::Exception;
// using v8::FunctionCallbackInfo;
// using v8::Isolate;
// using v8::Local;
// using v8::Number;
// using v8::Object;
// using v8::String;
// using v8::Value;

void Roller(const FunctionCallbackInfo<Value>& args) {

  Isolate* isolate = args.GetIsolate();

  Local<String> s = args[0].As<String>();
//   String::Utf8Value c = Value(s);

  String::Utf8Value str(isolate, s);

//   int r = roll(*str); //, "result.die");
  int r = roll("1d2"); //, "result.die");

//   // Perform the operation
//   double value =
//       args[0].As<Number>()->Value() + args[1].As<Number>()->Value();
//   Local<Number> num = Number::New(isolate, value);

  // Set the return value (using the passed in
  // FunctionCallbackInfo<Value>&)
  args.GetReturnValue().Set(r);
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "roll", Roller);
}
NODE_MODULE(NODE_GYP_MODULE_NAME, init);