#include "bench/fib.hpp"

// RE Benchmark TU 5361 of 20000 (depth=28, stamp="default")
namespace bench_tu_5361 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5361>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5361
