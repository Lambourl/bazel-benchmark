#include "bench/fib.hpp"

// RE Benchmark TU 47 of 20000 (depth=28, stamp="default")
namespace bench_tu_47 {
constexpr unsigned long long result = ::bench::slow_fib<28, 47>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_47
