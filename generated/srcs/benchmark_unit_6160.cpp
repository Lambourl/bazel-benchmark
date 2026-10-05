#include "bench/fib.hpp"

// RE Benchmark TU 6160 of 20000 (depth=28, stamp="default")
namespace bench_tu_6160 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6160>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6160
