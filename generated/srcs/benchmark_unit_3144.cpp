#include "bench/fib.hpp"

// RE Benchmark TU 3144 of 20000 (depth=28, stamp="default")
namespace bench_tu_3144 {
constexpr unsigned long long result = ::bench::slow_fib<28, 3144>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_3144
