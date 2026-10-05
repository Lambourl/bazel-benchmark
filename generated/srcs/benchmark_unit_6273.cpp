#include "bench/fib.hpp"

// RE Benchmark TU 6273 of 20000 (depth=28, stamp="default")
namespace bench_tu_6273 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6273>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6273
