#include "bench/fib.hpp"

// RE Benchmark TU 6022 of 20000 (depth=28, stamp="default")
namespace bench_tu_6022 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6022>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6022
