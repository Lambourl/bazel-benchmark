#include "bench/fib.hpp"

// RE Benchmark TU 417 of 20000 (depth=28, stamp="default")
namespace bench_tu_417 {
constexpr unsigned long long result = ::bench::slow_fib<28, 417>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_417
