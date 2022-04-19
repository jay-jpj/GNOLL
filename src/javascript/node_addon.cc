#include <node.h>
#include <v8.h>

using namespace v8;

Handle<Value> Method(const Arguments& args) {
  HandleScope scope;
  return scope.Close(String::New("world"));
}

void init(Handle<Object> target) {
  NODE_SET_METHOD(target, "hello", Method);
}

NODE_MODULE(mybinding, init);
// #include <node.h>
// #include <v8.h>

// #include "shared_header.h"

// using namespace v8;

// // Handle<Value> Roller(const FunctionCallbackInfo<Value>& args) {
// Handle<Value> Roller(const Arguments& args) {

//   Isolate* isolate = args.GetIsolate();

//   Local<String> s = args[0].As<String>();
// //   String::Utf8Value c = Value(s);

//   String::Utf8Value str(isolate, s);

// //   int r = roll(*str); //, "result.die");
//   char * cp = (char *)"1d2";
//   int r = roll(cp); //, "result.die");

// //   // Perform the operation
// //   double value =
// //       args[0].As<Number>()->Value() + args[1].As<Number>()->Value();
// //   Local<Number> num = Number::New(isolate, value);

//   // Set the return value (using the passed in
//   // FunctionCallbackInfo<Value>&)
//   auto r = args.GetReturnValue().Set(r);
//   return r;
// }

// void init(Local<Object> exports) {
//   NODE_SET_METHOD(exports, "roll", Roller);
// }
// NODE_MODULE(NODE_GYP_MODULE_NAME, init);