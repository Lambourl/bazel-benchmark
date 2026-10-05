#include "bench/fib.hpp"

// RE Benchmark TU 16144 of 20000 (depth=28, stamp="default")
namespace bench_tu_16144 {
constexpr unsigned long long result = ::bench::slow_fib<28, 16144>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_16144
