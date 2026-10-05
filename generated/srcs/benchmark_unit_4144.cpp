#include "bench/fib.hpp"

// RE Benchmark TU 4144 of 20000 (depth=28, stamp="default")
namespace bench_tu_4144 {
constexpr unsigned long long result = ::bench::slow_fib<28, 4144>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_4144
