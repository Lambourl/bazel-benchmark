#include "bench/fib.hpp"

// RE Benchmark TU 8266 of 20000 (depth=28, stamp="default")
namespace bench_tu_8266 {
constexpr unsigned long long result = ::bench::slow_fib<28, 8266>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_8266
