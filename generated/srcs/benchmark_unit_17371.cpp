#include "bench/fib.hpp"

// RE Benchmark TU 17371 of 20000 (depth=28, stamp="default")
namespace bench_tu_17371 {
constexpr unsigned long long result = ::bench::slow_fib<28, 17371>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_17371
